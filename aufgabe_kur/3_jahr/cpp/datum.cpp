#include <bits/types/time_t.h>
#include <stdio.h>
#include <time.h>
#include <string>
#include <iostream>
#include <limits>

using namespace std;    // damit man nicht std::cout schreiben muss

struct datum{
    private:
        int tag,mon,jahr;
    public:
        void tagvor(void){
            switch (mon) {
                case 1: 
                case 3: 
                case 5: 
                case 7: 
                case 8:
                case 10:
                    switch (tag) {
                        case 31:
                            tag = 1;
                            mon = mon +1;
                            break;
                        
                        default:
                            tag = tag +1; 
                            break;
                    }
                    break;
                
                case 4:
                case 6:
                case 9:
                case 11:
                    switch (tag) {
                        case 30:
                            tag = 1;
                            mon = mon +1;
                            break;
                        
                        default:
                            tag = tag +1; 
                            break;
                    }
                    break;

                case 2:
                    if (istschaltjahr()) {
                        switch (tag) {      // wenn Schaltjahr dann Feb mit 29 Tag
                            case 29:
                                tag = 1;
                                mon = mon +1;
                                break;
                            
                            default:
                                tag = tag +1; 
                                break;
                        }
                    }
                    else {
                        switch (tag) {      // wenn kein  Schaltjahr dann Feb mit 28 Tag
                            case 28:
                                tag = 1;
                                mon = mon +1;
                                break;
                            
                            default:
                                tag = tag +1; 
                                break;
                        }
                    }
                    break;

                case 12:
                    switch (tag) {
                        case 31:
                            tag = 1;
                            mon = 1;
                            jahr = jahr +1;
                            break;
                        
                        default:
                            tag = tag +1; 
                            break;
                    }
                    break;
            }
        }
        void tagzurueck(){
            switch (mon) {
                case 1: 
                    switch (tag) {
                        case 1:
                            tag = 31;
                            mon = 12;
                            jahr = jahr -1;
                            break;
                        
                        default:
                            tag = tag -1; 
                            break;
                    }
                    break;

                
                case 5: 
                case 7: 
                case 8:
                case 10:
                case 12:
                    switch (tag) {
                        case 1:
                            tag = 30;
                            mon = mon - 1;
                            break;
                        
                        default:
                            tag = tag - 1; 
                            break;
                    }
                    break;

                case 2:
                case 4:
                case 6:
                case 9:
                case 11:
                    switch (tag) {
                        case 1:
                            tag = 31;
                            mon = mon - 1;
                            break;
                        
                        default:
                            tag = tag - 1; 
                            break;
                    }
                    break;

                case 3:
                    if (istschaltjahr()) {
                        switch (tag) {      // wenn Schaltjahr dann Feb mit 29 Tag
                            case 1:
                                tag = 29;
                                mon = mon - 1;
                                break;
                            
                            default:
                                tag = tag - 1; 
                                break;
                        }
                    }
                    else {
                        switch (tag) {      // wenn kein  Schaltjahr dann Feb mit 28 Tag
                            case 1:
                                tag = 28;
                                mon = mon - 1;
                                break;
                            
                            default:
                                tag = tag - 1; 
                                break;
                        }
                    }
                    break;

            }
        }
        void eingabe(){
            cout << "Jahr:";
            cin >> jahr;
            do {
                cout << "Monate:";
                cin >> mon;
            }while (mon > 12 || mon < 0);
            switch (mon) {
                case 1: 
                case 3: 
                case 5: 
                case 7: 
                case 8:
                case 10:
                case 12:
                    do {
                        cout << "Tag:";
                        cin >> tag;
                    }while (tag > 31 || mon < 0);
                    break;


            }



            
        }
        void ausgabe(){
            ;
        }

    private:
        int anzahltage(){
            switch (mon) {
                case 1: case 3: case 5: case 7: case 8: case 10: case 12: return 31;
                case 4: case 6: case 9: case 11: return 30;
            };
            if (istschaltjahr()) 
                return 29;
            else
                return 28;
        }

        int istschaltjahr(){
            if (!(jahr%100)%4 && (jahr%100) || !(jahr%400))
                return 1;
            else
                return 0;;
        }

    datum(){
        time_t zeitin_sek;
        zeitin_sek = time(NULL);
        struct tm zeit_bu;
        zeit_bu=*localtime(&zeitin_sek);
        tag = zeit_bu.tm_mday;
        mon = zeit_bu.tm_mon+1;
        jahr= zeit_bu.tm_year+1900;
    }

    datum(int t, int m, int j){
        tag = t;
        mon = m;
        jahr = j;
    }
};

int main(void){
    return 0;
}