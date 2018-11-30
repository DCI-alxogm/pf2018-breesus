/*Programa creado como primer avance para la realización del proyecto final. Creado el 30/11/18
El objetivo es calcular las distancias entre los puntos, primero del archivo de datos, luego del archivo de datos y aleatorios, y por ultimo, el archivo de aleatorios unicamente. Este archivo sera agregado al codigo final.*/

#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<time.h>

int main(){
    
    FILE*Ale;
    FILE*Datos;
    int c, na=0, nd=0;
    
    if((Ale=fopen("Aleatorios.txt", "r")) == NULL){
      perror("Aleatorios.txt");
      return EXIT_FAILURE;
      }
  
    while((c=fgetc(Ale)) != EOF){
    if(c == "\n"){
       na++;
       }}

    fclose(Ale);
    printf("El archivo de Aleatorios.txt tiene %i puntos \n", na);

    
    if((Datos=fopen("Números_de_prueba.c", "r")) == NULL){
      perror("Números_de_prueba.c");
      return EXIT_FAILURE;
      }
  
    while((c = fgetc(Datos)) != EOF){
    if(c == " \n"){
       nd++;
       }}
    
    fclose(Datos);
    printf("El archivo de Números_de_prueba.c tiene %i puntos\n", nd);
    return EXIT_SUCCESS;
    }

