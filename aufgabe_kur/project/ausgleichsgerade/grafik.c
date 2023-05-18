#include <stdio.h>
#include <liner.h>
#include <unistd.h>

void grafik(double** liste, int Anzahl){
    /*
    // Versuche 1
    char s[4]="";
    //if(liner_init()!=0){
    //    perror("Liner Error");
    //    return;
    //}
    puts("1");
    if(liner_init_xywh(0,0,10, 10, 640, 840)!=0){
        perror("Liner Error");
        return;
    }
    puts("2");
    line(0, 10, 600, 10);
    line(10, 0, 440, 0);
    line(0,0,450,450);
    puts("3");
    for (int x=0 ; x< Anzahl; ++x) {
        pixel(liste[x][0], liste[x][1]);
        sprintf(s, "P%d",x);
        text(liste[x][0], liste[x][1],s);
    }
    puts("4");
    text(100, 5, "X");
    text(5, 100, "Y");

    puts("5");
    //sleep(5);
    puts("6");
    liner_exit();
    puts("7");
    return;
    */

    //Verscuhe 2
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


    FILE *dm;
    char dname[256] = "ausgleichsgerade.svg";
    dm = fopen(dname,"w");
    if (!dm) { 
        perror(dname); 
        return;;
    }

    fprintf(dm, "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n");
    fprintf(dm, "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"550\" height=\"500\">\n");

    // Bestimmung der Größe des Koordinatensystems(Max-Wert)
    double xMax = liste[0][0];
    double yMax = liste[0][1];
    double xMin = liste[0][0];
    double yMin = liste[0][1];
    for (int i = 0; i < Anzahl; ++i) {
        if (liste[i][0] > xMax) {xMax = liste[i][0];}
        if (liste[i][1] > yMax) {yMax = liste[i][1];}
        if (liste[i][0] < xMin) {xMin = liste[i][0];}
        if (liste[i][1] < yMin) {yMin = liste[i][1];}}
    
    double xStep = xMax / 10.0;
    double yStep = yMax / 10.0;

    // Berechnung der Pixelabstände zwischen den Koordinatenachsen
    double xScale = 400/xMax;
    double yScale = 400/yMax;
 
    // Zeichnen der x-Achse
    fprintf(dm, "<line x1=\"50\" y1=\"450\" x2=\"450\" y2=\"450\" stroke=\"black\" stroke-width=\"2\" />\n");	// x-Achse
   
    for (double i = xMin; i < xMax; i += xStep) {
        int xPos = 50 + (i - xMin) * xScale;
    	fprintf(dm, "<line x1=\"%d\" y1=\"450\" x2=\"%d\" y2=\"460\" stroke=\"black\" />\n", xPos, xPos);
    	fprintf(dm, "<text x=\"%d\" y=\"480\" font-size=\"12\">%.1f</text>\n", xPos, i-liste[0][0]);
    }

    // Zeichnen der y-Achse
    fprintf(dm, "<line x1=\"50\" y1=\"50\" x2=\"50\" y2=\"450\" stroke=\"black\" stroke-width=\"2\" />\n");	// y-Achse
    
    for (double i = yMin; i <= yMax; i += yStep) {
	    int yPos = 450 - (i - yMin) * yScale;
	    fprintf(dm, "<line x1=\"40\" y1=\"%d\" x2=\"50\" y2=\"%d\" stroke=\"black\" />\n", yPos, yPos);
	    fprintf(dm, "<text x=\"10\" y=\"%d\" font-size=\"12\">%.1f</text>\n", yPos + 5, i-liste[0][1]);
    }

    // Beschriftung der Achsen
    fprintf(dm, "<text x=\"480\" y=\"480\" text-anchor=\"middle\">X-Achse</text>\n");
    fprintf(dm, "<text x=\"200\" y=\"250\" transform=\"rotate(-90 20,250)\" text-anchor=\"middle\">Y-Achse</text>\n");

    // Zeichnen der Datenpunkte
    for (int i = 0; i < Anzahl; i++) {
        int x_pos = 50 + liste[i][0] * xScale;
        int y_pos = 450 - liste[i][1] * yScale;
        fprintf(dm, "<circle cx=\"%d\" cy=\"%d\" r=\"3\" fill=\"blue\" />\n", x_pos, y_pos);
        fprintf(dm, "<text x=\"%d\" y=\"%d\" font-size=\"8\">P%d (%.1f, %.1f)</text>\n", x_pos+10, y_pos, i+1, liste[i][0], liste[i][1]);
    }

    /// Zeichnen der Regressionsgerade
    double y_start = b * yScale;
    double y_end = yMax * yScale;
    double x_end = xMax * xScale;
    
    fprintf(dm, "<line x1=\"50\" y1=\"%f\" x2=\"%f\" y2=\"%f\" stroke=\"red\" stroke-width=\"2\" />\n", 450 - y_start, 50+x_end, 450 - y_end);

    fprintf(dm, "</svg>\n");
    fclose(dm);

    printf("SVG-Datei erfolgreich gespeichert!\n");
    
    // Öffnen der SVG-Datei mit Inkscape
    char command[100];
    sprintf(command, "inkscape ausgleichsgerade.svg");
    system(command);
    return ;



}