#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<time.h>
#include<string.h>

void Aleatorios(int n);
int Lineas(char Nombre[40]);

int main(){
    int l1, l2, i;
    char Respuesta[3], Nombre1[40], Nombre2[40]="Aleatorios.txt";
    float r2, r1, s, x1, y1, z1, x2, y2, z2;
    FILE*Arc;
    FILE*Arc2;
    
    printf("¿De qué archivo se tomarán los puntos?");
    scanf("%s", Nombre1);
    l1=Lineas(Nombre1);
    printf("El archivo tiene %i lineas. \n", l1);
    printf("¿Quíere usar un archivo con puntos aleatorios para los estimadores?");
    scanf("%s", Respuesta);
    if(strcmp(Respuesta, "Sí") == 0){
      printf("Introduzca el número de puntos aleatorios a generar.\n");
      scanf("%i", &l2);
      Aleatorios(l2);
      
      }else{
      printf("¿De que otro archivo se tomarán los puntos?");
      scanf("%s", Nombre2);
      l2=Lineas(Nombre2);
      printf("El archivo tiene %i lineas.\n", l2);
      printf("%s", Nombre2);
      }     
     printf("Introduce la distancia maxima a evaluar (final del bin). \n");
     scanf("%f", &r2);
     printf("Introduce la distancia minima a evaluar (inicio del bin).\n");
     scanf("%f", &r1);
     printf("El bin seleccionado abarca distancias desde %f hasta %f.\n", r1, r2);
    
    Arc=fopen(Nombre1, "r");
    for(i=0; i<l1; i++){
       fscanf(Arc, "%f %f %f", &x1, &y1, &z1);
       printf("%f %f %f\n", x1, y1, z1);
       for(i=0;i<l1;i++){
           Arc=fopen(Nombre1, "r");
           fscanf(Arc, "%f %f %f", &x2, &y2, &z2);
           s=sqrt((pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2)));
           printf("%f\n", s);
           fclose(Arc);
           }}
    fclose(Arc);
    Arc=fopen(Nombre1, "r");
    for(i=0; i<l1; i++){
       fscanf(Arc, "%f %f %f", &x1, &y1, &z1);
       printf("%f %f %f\n", x1, y1, z1);
       for(i=0;i<l2;i++){
           Arc2=fopen(Nombre2, "r");
           fscanf(Arc2, "%f %f %f", &x2, &y2, &z2);
           s=sqrt((pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2)));
           printf("%f\n", s);
           fclose(Arc2);
           }}
       Arc2=fopen(Nombre2, "r");
    for(i=1; i<l2; i++){
       fscanf(Arc2, "%f %f %f", &x1, &y1, &z1);
       printf("%f %f %f\n", x2, y2, z2);
       for(i=1;i<l2;i++){
           
           fscanf(Arc2, "%f %f %f", &x2, &y2, &z2);
           s=sqrt((pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2)));
           printf("%f\n", s);
           
           }}
    fclose(Arc2);


    
    
    return 0;
}
