#include <stdio.h>
#include <stdlib.h>
#include <complex.h>
const double pi=3.141592653589793;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

complex double u1, i1, Z1,Y1;
double  w, R1r, L1r, R1p, L1p;

int main(void) {
	w=2.0*pi*50.0;
	
	u1=1.6*cexp(I*20.0/180.0*pi);
	i1=80.0e-3*cexp(-I*25.0/180.0*pi);
	// i1=80.0e-3*cexp(-I*25.0/180.0*pi);
	Z1=u1/i1;   // Impedanz Z1 definiert aus u1/i1       I: Imaginäre Einheit
	
	// Ausgabe nach Real- und Imaginärteil, Befehel creal() und cimag()
	fprintf(stdout,"Z1 = %g Ohm + j (%g) Ohm \n",creal(Z1),cimag(Z1));

	// Ausgabe nach Betrag- und Phase, Befehel cabs() und carg()
	fprintf(stdout,"Z1 = %g Ohm * exp(j*(%g)) \n",cabs(Z1),carg(Z1)/pi*180.0);
	
	// Berechung in Reihenschaltung
	R1r=creal(Z1);
	L1r=cimag(Z1)/w;
	fprintf(stdout, "R1r = %g Ohm; L1r = %g H\n",R1r,L1r);

	// Berechung in Paralleschaltung
	Y1=1/Z1;
	R1p=1/creal(Y1);
	L1p=-1/cimag(Y1);
	fprintf(stdout, "R1p = %g Ohm; L1p = %g H\n", R1p, L1p);

	

	return 0;
}