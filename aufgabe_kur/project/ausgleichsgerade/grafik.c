#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void grafik(double** liste, int Anzahl){

    double sigma_x =0, sigma_y=0, sigma_xy=0, sigma_x2 =0, sigma_y2 =0, b = 0, m=0; 
    
    for (int x =0 ; x<Anzahl; ++x) {
        sigma_x = sigma_x + liste[x][0];                    // Summe X Punkten
        sigma_y = sigma_y + liste[x][1];                    // Summe Y Punkten
        sigma_xy = sigma_xy + (liste[x][0] *liste[x][1]);   // Summe XY 
        sigma_x2 = sigma_x2 + (liste[x][0] *liste[x][0]);   // Summe X2 
        sigma_y2 = sigma_y2 + (liste[x][1] *liste[x][1]);   // Summe Y2
    }
    
    b = (sigma_y * sigma_x2 - sigma_x * sigma_xy)/(Anzahl * sigma_x2 - sigma_x * sigma_x);  // b berechnen
    m = (Anzahl * sigma_xy - sigma_x * sigma_y)/(Anzahl * sigma_x2 - sigma_x * sigma_x);    // m berechnen


    /*
        SVG
            --> x+
         |  xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
         |  x                                 x
         v  x |                               x
            x |                x              x
         y  x |                               x
         +  x |                               x
            x |                               x
            x |             x                 x
            x |                               x
            x |    x                          x
            x |                               x
            x |                               x
            x -----------------------------   x
            xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
        
    */

    double svg_width =1000, svg_height =1000, x_offset=50,y_offset=50, x_maxscale=10,y_maxscale=10;

    FILE *file;
    char svg[256] = "ausgleichsgerade.svg";
    file = fopen(svg,"w");
    if (!file) { 
        perror(svg); 
        return;;
    }

    fprintf(file, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n");
    fprintf(file, "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"%g\" height=\"%g\">\n",svg_width,svg_height);

    // Bestimmung der Größe des Koordinatensystems(Max-Wert)
    double xMax = liste[0][0];
    double yMax = liste[0][1];
    double xMin = liste[0][0];
    double yMin = liste[0][1];

    for (int i = 0; i < Anzahl; ++i) {
        if (liste[i][0] > xMax)
            xMax = liste[i][0];
        if (liste[i][1] > yMax)
            yMax = liste[i][1];
        if (liste[i][0] < xMin)
            xMin = liste[i][0];
        if (liste[i][1] < yMin) 
            yMin = liste[i][1];
    }
    
    double xStep = ceil(xMax / x_maxscale);
    double yStep = ceil(yMax / y_maxscale);
    
    // Berechnung der Pixelabstände zwischen den Koordinatenachsen
    double xScale = (svg_width - x_offset * 2) / (xStep * x_maxscale);
    double yScale = (svg_height - y_offset * 2) / (yStep * y_maxscale);
    // Zeichnen der x-Achse
    fprintf(file, "<line x1=\"%g\" y1=\"%g\" x2=\"%g\" y2=\"%g\" stroke=\"black\" stroke-width=\"2\" />\n",x_offset, svg_height - y_offset, svg_width-x_offset, svg_height - y_offset);	// x-Achse
   
    for (double i = 0; i <= x_maxscale*xStep ; i += xStep) {
        int xPos = x_offset + i * xScale;
    	fprintf(file, "<line x1=\"%d\" y1=\"%g\" x2=\"%d\" y2=\"%g\" stroke=\"black\" />\n", xPos, svg_height-y_offset, xPos, svg_height-y_offset+10);
    	fprintf(file, "<text x=\"%d\" y=\"%g\" font-size=\"12\">%.1f</text>\n", xPos, svg_height-y_offset+30, i);
    }

    // Zeichnen der y-Achse
    fprintf(file, "<line x1=\"%g\" y1=\"%g\" x2=\"%g\" y2=\"%g\" stroke=\"black\" stroke-width=\"2\" />\n",x_offset, svg_height - y_offset, x_offset, y_offset);	// y-Achse
    
    for (double i = 0; i <= y_maxscale*yStep ; i += yStep) {
	    int yPos = svg_height-y_offset - i  * yScale;
	    fprintf(file, "<line x1=\"%g\" y1=\"%d\" x2=\"%g\" y2=\"%d\" stroke=\"black\" />\n",x_offset-10, yPos, y_offset, yPos);
	    fprintf(file, "<text x=\"10\" y=\"%d\" font-size=\"12\">%.1f</text>\n", yPos + 5, i);
    }

    // Beschriftung der Achsen
    fprintf(file, "<text x=\"%g\" y=\"%g\" text-anchor=\"middle\">X-Achse</text>\n",svg_width-90,svg_height-5);
    fprintf(file, "<text x=\"200\" y=\"275\" transform=\"rotate(-90 20,275)\" text-anchor=\"middle\">Y-Achse</text>\n");

    // Zeichnen der Datenpunkte
    for (int i = 0; i < Anzahl; i++) {
        int x_pos = x_offset + liste[i][0] * xScale;
        int y_pos = svg_height-y_offset - liste[i][1] * yScale;
        fprintf(file, "<circle cx=\"%d\" cy=\"%d\" r=\"3\" fill=\"blue\" />\n", x_pos, y_pos);
        fprintf(file, "<text x=\"%d\" y=\"%d\" font-size=\"8\">P%d (%.1f, %.1f)</text>\n", x_pos+10, y_pos, i+1, liste[i][0], liste[i][1]);
    }

    // Zeichnen der Regressionsgerade
    // y = mx +b
    double y_start = b * yScale;
    double y_end = (xStep*x_maxscale*m+b) * yScale;
    double x_end = (yStep*y_maxscale-b)/m *xScale;
    
    if (x_end+x_offset < svg_width-x_offset*2) 
        fprintf(file, "<line x1=\"%g\" y1=\"%f\" x2=\"%f\" y2=\"%f\" stroke=\"red\" stroke-width=\"2\" />\n",x_offset, svg_height-y_offset - y_start, x_offset + x_end, y_offset);
    else{
        x_end = xStep*10 *xScale;
        fprintf(file, "<line x1=\"%g\" y1=\"%f\" x2=\"%f\" y2=\"%f\" stroke=\"red\" stroke-width=\"2\" />\n",x_offset, svg_height-y_offset - y_start, x_offset + x_end, svg_height-y_offset - y_end);
    }

    fprintf(file, "</svg>\n");
    fclose(file);

    puts("SVG-Datei erfolgreich gespeichert!\n");
    
    // Öffnen der SVG-Datei mit Inkscape
    char command[100];
    sprintf(command, "inkscape ausgleichsgerade.svg");
    system(command);

    return ;

}