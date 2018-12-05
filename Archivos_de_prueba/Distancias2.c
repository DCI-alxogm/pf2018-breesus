/*Programa creado como primer avance para la realización del proyecto final. Creado el 30/11/18
El objetivo es calcular las distancias entre los puntos, primero del archivo de datos, luego del archivo de datos y aleatorios, y por ultimo, el archivo de aleatorios unicamente. Este archivo sera agregado al codigo final.*/

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main(){
    
    FILE *Ale;
    FILE *Datos;
    float x1, y1, z1, x2, y2, z2, s;
    int i;

    Ale=fopen("Aleatorios.txt", "r");
    Datos=fopen("Números_de_prueba.c", "r");

    for(i=0; i<10; i++){
       fscanf(Ale, "%f %f %f", &x1, &y1, &z1);
       printf("%f %f %f\n", x1, y1, z1);
       for(i=0;i<10;i++){
           fscanf(Datos, "%f %f %f", &x2, &y2, &z2);
           s=sqrt((pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2)));
           printf("%f\n", s);
           }}


 return 0;
}
