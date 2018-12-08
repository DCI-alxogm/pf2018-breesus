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
    float r2, r1;
    
    
    printf("Introduzca el número de puntos aleatorios a generar.\n");
    scanf("%i", &n);
    Aleatorios(n);
    printf("¿De qué archivo se tomarán los puntos?");
    scanf("%s", Nombre);
    l[0]=Lineas(Nombre);
    printf("El archivo tiene %i lineas. \n", l[0]);
    printf("¿Hay otro archivo del que tomar los puntos?");
    scanf("%s", Respuesta);
    if(strcmp(Respuesta, "Si")==0){
         printf("Escriba bien, puerco.\n");
         }
    for(i=1; strcmp(Respuesta, "Sí") == 0; i++){
       printf("Introduzca el nombre del archivo del que desea contar las lineas.\n");
       scanf("%s", Nombre);
       l[i]=Lineas(Nombre);
       printf("El archivo tiene %i lineas.\n", l[i]);
       printf("¿Hay otro archivo del que tomar los puntos?");
       scanf("%s", Respuesta); 
            if(strcmp(Respuesta, "Si")==0){
            printf("Escriba bien, puerco");
         }     

      }
     printf("Introduce la distancia maxima a evaluar (final del bin). \n");
     scanf("%f", &r2);
     printf("Introduce la distancia minima a evaluar (inicio del bin).\n");
     scanf("%f", &r1);
     printf("El bin seleccionado abarca distancias desde %f hasta %f.\n", r1, r2);
     
    
    
    return 0;
}
