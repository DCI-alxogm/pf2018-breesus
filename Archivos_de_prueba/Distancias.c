/*Programa creado como primer avance para la realización del proyecto final. Creado el 30/11/18
El objetivo es contar el número de puntos que tenemos en ambos archivos que seran evaluados, ya que no conocemos con exactitud cuantos ciclos seran necesarios. Este archivo sera agregado al codigo final.*/

#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main(){
    
    FILE *Ale;
    FILE *Datos;     //Se declaran las variables necesarias, dos de ellas son para llamar los ficheros que contienen los puntos.
    int na, nd, ch;
    

    Ale=fopen("Aleatorios.txt", "r");
    na=0;
    while((ch=fgetc(Ale)) != EOF){     //Se evalua la condicion de que no sea el final del archivo.
    if(ch == '\n'){        //Cada que un caracter dentro del archivo sea un salto de linea, se sumana 1 a na.
       na++;
       }}

    fclose(Ale);
    printf("El archivo de Aleatorios.txt tiene %d puntos \n", na);  //Se imprime el número de lineas en el archivo.

 
    Datos=fopen("datos.txt", "r");
    nd=0;
    while((ch=fgetc(Datos)) != EOF){
    if(ch=='\n'){          //Se repite el proceso con el otro archivo
       nd++;
       }}
    
    fclose(Datos);
    printf("El archivo de Números_de_prueba.c tiene %d puntos\n", nd);
    return EXIT_SUCCESS;
    }

