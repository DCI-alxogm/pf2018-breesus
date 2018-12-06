#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<time.h>
#include <string.h>

void Aleatorios(int n);
int Lineas(char Nombre[40]);

int main(){
    int n, l[10], i;
    char Respuesta[3], Nombre[40];
    
    printf("Introduzca el número de puntos aleatorios a generar.\n");
    scanf("%i", &n);
    Aleatorios(n);
    printf("¿De qué archivo se tomarán los puntos?");
    l[0]=Lineas(Nombre);
    printf("El archivo tiene %i lineas. \n", l[0]);
    printf("¿Hay otro archivo del que tomar los puntos?");
    scanf("%s", Respuesta);
    if(strcmp(Respuesta, "Si")==0){
         printf("Escriba bien, puerco.\n");
         }
    for(i=1; strcmp(Respuesta, "Sí") == 0; i++){
      l[i]=Lineas(Nombre);
      printf("El archivo tiene %i lineas.\n", l[i]);
      printf("¿Hay otro archivo del que tomar los puntos?");
      scanf("%s", Respuesta); 
      if(strcmp(Respuesta, "Si")==0){
         printf("Escriba bien, puerco");
         }     
      }
    
    return 0;
}
