#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<time.h>
#include<string.h>

void Aleatorios(int n);
int Lineas(char Nombre[40]);

int main(){
    int l1, l2, i, j;
    char Respuesta[3], Nombre1[40], Nombre2[40]="Aleatorios.txt";
    float r2, r1, s, x[1000], y[1000], z[1000];
    FILE*Arc;
   FILE*Arc2;

    printf("¿De qué archivo se tomarán los puntos?");
    scanf("%s", Nombre1);
    l1=Lineas(Nombre1);
    printf("El archivo tiene %i lineas. \n", l1);
    printf("¿Quíere usar un archivo con puntos aleatorios para los estimadores?(S/N)\n");
    scanf("%s", Respuesta);
    if(strcmp(Respuesta, "S") == 0){
      printf("Introduzca el número de puntos aleatorios a generar.\n");
      scanf("%i", &l2);
      Aleatorios(l2);
      
      }else{
      printf("¿De que otro archivo se tomarán los puntos?\n");
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
       fscanf(Arc, "%f %f %f", &x[i], &y[i], &z[i]);
      
}
fclose(Arc);
printf("valores de r para el archivo %s\n", Nombre1);
     for(i=0; i<l1; i++){
       for(j=(i+1);j<l1;j++){
           s=sqrt((pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2)+pow((z[i]-z[j]),2)));
           printf("%f\n", s);
          }}

Arc=fopen(Nombre1, "r");
    for(i=0; i<l1; i++){
       fscanf(Arc, "%f %f %f", &x[i], &y[i], &z[i]);
      
}
fclose(Arc);
Arc2=fopen(Nombre2, "r");
    for(i=0; i<l2; i++){
       fscanf(Arc2, "%f %f %f", &x[j], &y[j], &z[j]);
       
}
fclose(Arc2);
printf("valores de r para los archivos %s y %s\n", Nombre1, Nombre2);
 for(i=0; i<l2; i++){
       for(j=0;j<l2;j++){
           s=sqrt((pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2)+pow((z[i]-z[j]),2)));
           printf("%f\n", s);
          }}
Arc2=fopen(Nombre2, "r");
    for(i=0; i<l2; i++){
       fscanf(Arc2, "%f %f %f", &x[i], &y[i], &z[i]);
       
}
fclose(Arc2);
printf("valores de r para el archivo %s\n", Nombre2);
     for(i=0; i<l2; i++){
       for(j=(i+1);j<l2;j++){
           s=sqrt((pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2)+pow((z[i]-z[j]),2)));
           printf("%f\n", s);
          }}

 
return 0;
}

    
    

