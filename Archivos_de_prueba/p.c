#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<time.h>
#include<string.h>

void Aleatorios(int n);
int Lineas(char Nombre[40]);

int main(){
    int l[1], i;
    char Respuesta[3], Nombre1[40], Nombre2[40];
    float r2, r1, s, x1, y1, z1, x2, y2, z2;
    FILE*Arc;
    FILE*Arc2;
    
    printf("¿De qué archivo se tomarán los puntos?");
    scanf("%s", Nombre1);
    l[0]=Lineas(Nombre1);
    printf("El archivo tiene %i lineas. \n", l[0]);
    printf("¿Quíere usar un archivo con puntos aleatorios para los estimadores?");
    scanf("%s", Respuesta);
    if(strcmp(Respuesta, "Sí") == 0){
      printf("Introduzca el número de puntos aleatorios a generar.\n");
      scanf("%i", &l[1]);
      Aleatorios(l[1]);
      Arc2=fopen("Aleatorios.txt", "r");
      }else{
      printf("¿De que otro archivo se tomarán los puntos?");
      scanf("%s", Nombre2);
      l[1]=Lineas(Nombre2);
      printf("El archivo tiene %i lineas.\n", l[1]);
      Arc2=fopen(Nombre2, "r");
      }     
     printf("Introduce la distancia maxima a evaluar (final del bin). \n");
     scanf("%f", &r2);
     printf("Introduce la distancia minima a evaluar (inicio del bin).\n");
     scanf("%f", &r1);
     printf("El bin seleccionado abarca distancias desde %f hasta %f.\n", r1, r2);
    Arc=fopen(Nombre1, "r");

    for(i=0; i<l[0]; i++){
       fscanf(Arc, "%f %f %f", &x1, &y1, &z1);
       printf("%f %f %f\n", x1, y1, z1);
       for(i=0;i<l[1];i++){
           fscanf(Arc, "%f %f %f", &x2, &y2, &z2);
           s=sqrt((pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2)));
           printf("%f\n", s);
           }}
    for(i=0; i<l[0]; i++){
       fscanf(Arc, "%f %f %f", &x1, &y1, &z1);
       printf("%f %f %f\n", x1, y1, z1);
       for(i=0;i<l[1];i++){
           fscanf(Arc2, "%f %f %f", &x2, &y2, &z2);
           s=sqrt((pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2)));
           printf("%f\n", s);
           }}
    for(i=1; i<l[1]; i++){
       fscanf(Arc2, "%f %f %f", &x1, &y1, &z1);
       printf("%f %f %f\n", x2, y2, z2);
       for(i=1;i<l[1];i++){
           fscanf(Arc2, "%f %f %f", &x2, &y2, &z2);
           s=sqrt((pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2)));
           printf("%f\n", s);
           }}


    
    
    return 0;
}
