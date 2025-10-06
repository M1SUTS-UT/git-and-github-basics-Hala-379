#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main () {
    int n,i;
    double x,h,S1, S2, a,b, finitial, ffinal, I, U,e;
    a=0.0; b=1.0; n=10;
    h=(b-a)/n;
    finitial=exp(a);
    ffinal=exp(b);
    S1=0; S2=0;
    
    for (i=1; i<n; i=i+1) {
        x=a+i*h;
        if (i%2==0)
           S1=S1+exp(x);
        else
           S2=S2+exp(x); 
    }
    I=h/3*(finitial+4*S2 + 2*S1 +ffinal); 
    printf ("La valeur de l'integrale est %lf \n", I);

    U=exp(b)-exp(a);
    e=fabs(I-U);
    printf ("La valeur de l'integrale est %lf \n", U);
    printf ("La valeur de l'erreur est %lf \n", e);
}
