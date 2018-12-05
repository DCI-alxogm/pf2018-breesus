/*Programa creado como primer avance para la realización del proyecto final. Creado el 30/11/18
El objetivo es calcular las distancias entre los puntos, primero del archivo de datos, luego del archivo de datos y aleatorios, y por ultimo, el archivo de aleatorios unicamente. Este archivo sera agregado al codigo final.*/

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main(){

    FILE *Ale;
    int na=0;
    int c;

    Ale=fopen("Aleatorios.txt", "r");
    
    while((c=fgetc(Ale) !=EOF)){
         fscanf(Ale, "%i", &c);
         if(c=='\n'){
           na++;}}
    
    printf(" %i\n", na);

  return 0;
}
