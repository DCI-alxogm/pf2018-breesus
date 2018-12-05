/*Programa creado el 5 de diciembre de 2018.
Esta parte del codigo tiene como objetivo almacenar las funciones usadas para el programa final.*/
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
void Aleatorios(int n){
     FILE*Ale;          //Se declara una variable para abrir el archivo donde se guardarán los números.
        float x, y, z;  //Se declaran los flotantes para los vectores unitarios de posición.
        int i;             //Se declara una variable para controlar funciones.
        srand(time(NULL));    //Se introduce una "semilla" para los números aleatorios enteros con relación a la hora de compilación.
        srand48(time(NULL));  //Se introduce una "semilla" para los números aleatorios flotantes con relación a la hora de compilación 

        
             
        printf("El número de puntos sera %i.\n", n);
                    
        
         Ale=fopen("Aleatorios.txt", "w");
         
         for(i=0; i<n; i++){
            x=drand48() * (20.0 - 0.0) + 0.0;
            y=drand48() * (20.0 - 0.0) + 0.0;   //Se escriben números aleatorios por sus componentes, usando un rango de 0 a 20, cosa que despues sera modificada con el tamaño del cubo.
            z=drand48() * (20.0 - 0.0) + 0.0;
         fprintf(Ale, "%f\t %f\t %f \n", x, y, z);  //Se imprimen los puntos en el archivo generado.
         }
     
}

int Lineas(){
    
    FILE *Ale;
    int nl, ch;
    char Nombre[40];
    
    printf("Introduzca el nombre del archivo del que desea contar las lineas.\n");
    scanf("%s", Nombre);
    Ale=fopen(Nombre, "r");
    nl=0;
    while((ch=fgetc(Ale)) != EOF){     //Se evalua la condicion de que no sea el final del archivo.
    if(ch == '\n'){        //Cada que un caracter dentro del archivo sea un salto de linea, se sumana 1 a na.
       nl++;
       }}

    fclose(Ale);

    return nl;
    }
