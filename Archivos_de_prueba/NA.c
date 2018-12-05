/*Programa creado como primer avance para la realización del proyecto final.
El objetivo es generar puntos aleatorios. Este archivo sera agregado al codigo final.*/

#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<time.h>

int main(){
	FILE*Ale;          //Se declara una variable para abrir el archivo donde se guardarán los números.
        float x, y, z, n;  //Se declaran los flotantes para los vectores unitarios de posición y controlar los números aleatorios.
        int i;             //Se declara una variable para controlar funciones.
        srand(time(NULL));    //Se introduce una "semilla" para los números aleatorios enteros con relación a la hora de compilación.
        srand48(time(NULL));  //Se introduce una "semilla" para los números aleatorios flotantes con relación a la hora de compilación.
        
        printf("Presione 1 para obtener un número aleatorio de puntos aleatorios. \n Presione 2 para obtener un número especifico de puntos aleatorios.");  //Se da la opción de escoger la cantidad de púntos, o ser también un número aleatorio.

        scanf("%i", &i); 

        switch(i){
               case 1:                         //En caso de ser un número aleatorio, el programa escogera un número al azar y lo usara despues para el cilo for.
                      n=rand() % 11;
                      printf("El número de puntos será %f", n);
                      break;
               case 2:      //En caso de ser un número de puntos determinado, se pedira dicho número.
                      printf("Introduzca el número de puntos a generar.\n"); 
                      scanf("%f", &n);
                      printf("El número de puntos sera %f", n);
                      break;
               }
         Ale=fopen("Aleatorios.txt", "w");
         fprintf(Ale, "x\t\t y\t\t z \n");         //Se genera el archivo y se prepara para escribir los puntos aleatorios.
         for(i=0; i<n; i++){
            x=drand48() * (20.0 - 0.0) + 0.0;
            y=drand48() * (20.0 - 0.0) + 0.0;   //Se escriben números aleatorios por sus componentes, usando un rango de 0 a 20, cosa que despues sera modificada con el tamaño del cubo.
            z=drand48() * (20.0 - 0.0) + 0.0;
         fprintf(Ale, "%f\t %f\t %f \n", x, y, z);  //Se imprimen los puntos en el archivo generado.
         }
     return 0;
}
        
