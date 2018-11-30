/*Programa creado como primer avance para la realización del proyecto final.
El objetivo es generar puntos aleatorios. Este archivo sera agregado al codigo final.*/

#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<time.h>

int main(){
	FILE*Ale;
        float x, y, z, n;
        int i;
        srand(time(NULL));
        srand48(time(NULL));  
        
        printf("Presione 1 para obtener un número aleatorio de puntos aleatorios. \n Presione 2 para obtener un número especifico de puntos aleatorios.");
        scanf("%i", &i);
        switch(i){
               case 1:
                      n=rand() % 11;
                      printf("El número de puntos será %f", n);
                      break;
               case 2:
                      printf("Introduzca el número de puntos a generar.\n");
                      scanf("%f", &n);
                      printf("El número de puntos sera %f", n);
                      break;
               }
         Ale=fopen("Aleatorios.txt", "w");
         fprintf(Ale, "x\t\t y\t\t z \n");
         for(i=0; i<n; i++){
            x=drand48() * (20.0 - 0.0) + 0.0;
            y=drand48() * (20.0 - 0.0) + 0.0;
            z=drand48() * (20.0 - 0.0) + 0.0;
         fprintf(Ale, "%f\t %f\t %f \n", x, y, z);
         }
     return 0;
}
        
