#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

FILE *dmr, *dmw;

void istime (char *tok)
{
    time_t stempel = time(NULL);            //Zeitstempel
    struct tm akt = *localtime(&stempel);   //Record aus time.h
    char zeit[100];                         //Zeitstring
    char zeitstempel[10], stundes[3], minutes[3], sekunds[3];
    
    memcpy(zeitstempel,tok,6);
    zeitstempel[6] = '\0';
    memcpy(stundes, zeitstempel, 2);
    memcpy(minutes, zeitstempel+2, 2);
    memcpy(sekunds, zeitstempel+4, 2);
    
    stundes[2] = '\0';
    minutes[2] = '\0';
    sekunds[2] = '\0';
    
    int stunde = atoi(stundes);
    int minute = atoi(minutes);
    int sekund = atoi(sekunds);
    
    akt.tm_hour = stunde;
    akt.tm_min  = minute;
    akt.tm_sec  = sekund;
                            
    strftime(zeit, 99, "%X",&akt);
    fprintf(dmw,"Zeitstempel:------------%s\n", zeit);
}

void isdatum (char* tok)
{
    time_t stempel = time(NULL);            //Zeitstempel
    struct tm akt = *localtime(&stempel);   //Record aus time.h
    char datum[100]="";                         //Zeitstring
    char zeitstempel[10], tags[3], monats[3], jahrs[3];
    
    memcpy(zeitstempel,tok,6);
    zeitstempel[6] = '\0';
    memcpy(tags, zeitstempel, 2);
    memcpy(monats, zeitstempel+2, 2);
    memcpy(jahrs, zeitstempel+4, 2);
    
    tags[2] = '\0';
    monats[2] = '\0';
    jahrs[2] = '\0';
    
    int tag = atoi(tags);
    int monat = atoi(monats);
    int jahr = atoi(jahrs);
    
    akt.tm_mday  = tag;
    akt.tm_mon   = monat-1;
    akt.tm_year  = jahr-1900+2000;
                            
    strftime(datum, 99, "%x",&akt);
    fprintf(dmw,"Datum:------------------%s\n\n", datum);
}

int main (void)
{
    //Variablen deklaration
    FILE *dms;
    char liesdatei[]="gps2.txt";
    char schreibdatei[100];
    char sicherungsdatei[]="datensatz_sicherung.txt";
    char eingabe[100];
    char *tok, *save;
    int lauf = 0, lauf2 = 0; 
    int datum = 0;
    setlocale(LC_ALL,"");
    
    
    //Dateiauswahl
    printf("In welche Datei soll geschrieben werden?: ");
    scanf("%99[^\n]", schreibdatei); while(getchar() != '\n');
    
    // Dateiinitialisierung und Fehlerauswertung
    dmr=fopen(liesdatei, "r");
    if(dmr == NULL)
    {
        perror(liesdatei);
        return 0;
    }
    dmw=fopen(schreibdatei, "w");
    if(dmw == NULL)
    {
        perror(schreibdatei);
        return 0;
    }
    dms=fopen(sicherungsdatei, "w");
    if(dms == NULL)
    {
        perror(sicherungsdatei);
        return 0;
    }
    
    lauf2 = 0;
    //Bearbeitung der GPS-Daten
    while(fgets(eingabe, sizeof(eingabe), dmr)!= NULL) 
    {
        if(strstr(eingabe,"$GPRMC") != NULL)
        {
            tok = strtok_r(eingabe, ",",&save);
            lauf2++;
            fprintf(dms,"Gesicherter String Nr.%i: %s\n",lauf2, save);
            lauf = 0;
            while(tok != NULL)
            {
                switch(lauf)
                {
                    case 0: fprintf(dmw,"Register:---------------%s\n", tok);
                    break;
                    case 1: istime(tok);
                    break;
                    case 3: fprintf(dmw,"Breitengrad:------------%s\n", tok);
                    break;
                    case 4: fprintf(dmw,"Ausrichtung:------------%s\n", tok);
                    break;
                    case 5: fprintf(dmw,"Laengengrad:------------%s\n", tok);
                    break;
                    case 6: fprintf(dmw,"Ausrichtung:------------%s\n", tok);
                    break;
                    case 7: datum = atoi(tok);
                            if(datum != 0)
                            isdatum(tok);
                    break;
                    case 9: datum = atoi(tok);
                            if(datum != 0)
                            isdatum(tok);
                    break;
                }
                
                ++lauf;
                tok = strtok_r(NULL, ",", &save);
            }
        }
    }
    
    fclose(dmr);
    fclose(dmw);
    fclose(dms);
    return 0; 
}
