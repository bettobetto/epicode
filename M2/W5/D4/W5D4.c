#include <stdio.h>
#include <math.h>

int main () 
{

int valore;
float pi = 3.14;
int areaquadrato;
float areacerchio, areatriangolo;

printf ("Inserisci il valore:\n");
scanf ("%d", &valore);

areaquadrato = valore * valore;
areacerchio = valore * pi;
areatriangolo = (sqrt(3)/(4)*(valore*valore));

printf ("Le aree con il valore %d inserito\n", valore);
printf ("Area del quadrato: %d\n", areaquadrato);
printf ("Area del cerchio: %f\n", areacerchio);
printf ("Area del triangolo: %f\n", areatriangolo);

}