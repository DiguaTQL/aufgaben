#include <stdio.h>
#include <stdlib.h>

int a(){
    FILE *file1;
    char NACHRICHT1[]="Das ist Nachricht1 von dschreiben1.txt.\n";
    file1=fopen("dschreiben1.txt","w");
    if(file1==NULL){
        perror("dschreiben1.txt");
        return 0;
    }
    fputs(NACHRICHT1, file1);
    fclose(file1);
    return 0;};

int b(){
    FILE *file2;
    char NACHRICHT2[]="Das ist Nachricht2 von dschreiben2.txt.\n";
    file2=fopen("dschreiben2.txt","a");
    if(file2==NULL){
        perror("dschreiben2.txt");
        return 0;
    }
    fputs(NACHRICHT2, file2);
    fclose(file2);
    return 0;};

int c(){
    system("ls -l dschreiben?.txt");
    system("cat dschreiben?.txt");

    return 0;};

int d(){
    return 0;};

void e(){
    return;};
void f(){
    return;};
void g(){
    return;};
void h(){
    return;};
void i(){
    return;};
void j(){
    return;};
void k(){
    return;};
void l(){
    return;};

int main(){
    int aufgabe;

    do {
        puts("----------------------------");
        printf("0. Ende\n1. dschreiben1.c\n2. dschreiben2.c\n3. dnachsehen\n");
        puts("----------------------------");
        printf("Ihre Auswahl:");
        scanf("%d",&aufgabe);
        while(getchar()!='\n') {}

       

        switch (aufgabe) {
            case 0:
                break;

            case 1:
                a();
                break;
                    
            case 2:
                b();
                break;
            case 3:
                c();
                break;

            /*case 4:
                d();
                break;

            case 5:
                e();
                break;

            case 6:
                f();
                break;
                    
            case 7:
                g();
                break;

            case 8:
                h();
                break;
                    
            case 9:
                i();
                break;
                    
            case 10:
                j();
                break;
                    
            case 11:
                k();
                break;
                    
            case 12:
                l();
                break;*/
                    
            default:
                puts("Input Invalid!");
                return 1;
            }

    }while (aufgabe!=0);
    return 0;
}