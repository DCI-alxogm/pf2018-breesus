#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<time.h>
#include<string.h>

void Aleatorios(int n);
int Lineas(char Nombre[40]);

int main(){
    int l1, l2, i, j, c1[100],c2[100], c3[100], k, p[2];
    char Respuesta[3], Nombre1[40], Nombre2[40]="Aleatorios.txt", Nombre3[40];
    float r2, s, x[1000], y[1000], z[1000], L, b2[100], b1[100], E;
    FILE*Arc;
    FILE*Arc2;
    FILE*Res;

    printf("Introduzca el nombre del archivo donde se colocaran los resultados.\n");
    scanf("%s", Nombre3);
    printf("Introduzca el tamaño de los lados del cubo en el que se trabajara.\n");
    scanf("%f", &L); 
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
     printf("Introduce el tamaño del bin con el que se evaluaran los estimadores.\n");
     scanf("%f", &r2);

     Res=fopen(Nombre3, "w");
   b2[0]=0;
    
    for(k=0; b2[k]<L; k++){
    b1[k]=b1[k-1]+r2;
    b2[k]=b2[k-1]+r2;
    }
    Arc=fopen(Nombre1, "r");
    for(i=0; i<l1-1; i++){
       fscanf(Arc, "%f %f %f", &x[i], &y[i], &z[i]);
      
}
fclose(Arc);
printf("valores de r para el archivo %s\n", Nombre1);
p[0]=0;
     for(i=0; i<l1-1; i++){
       for(j=(i+1);j<l1-1;j++){
           s=sqrt((pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2)+pow((z[i]-z[j]),2)));
           printf("%f\n", s);
            if(s<=b2[k] && s>b1[k]){
            c1[k]++;
            }
            p[0]++;
          }}

Arc=fopen(Nombre1, "r");
    for(i=0; i<l1-1; i++){
       fscanf(Arc, "%f %f %f", &x[i], &y[i], &z[i]);
      
}
fclose(Arc);
Arc2=fopen(Nombre2, "r");
    for(i=0; i<l2-1; i++){
       fscanf(Arc2, "%f %f %f", &x[j], &y[j], &z[j]);
       
}
p[1]=0;
fclose(Arc2);
printf("valores de r para los archivos %s y %s\n", Nombre1, Nombre2);
 for(i=0; i<l1-1; i++){
       for(j=0;j<l2-1;j++){
           s=sqrt((pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2)+pow((z[i]-z[j]),2)));
           printf("%f\n", s);
           if(s<=b2[k] && s>b1[k]){
            c2[k]++;
            }
           p[1]++;
          }}
Arc2=fopen(Nombre2, "r");
    for(i=0; i<l2-1; i++){
       fscanf(Arc2, "%f %f %f", &x[i], &y[i], &z[i]);
       
}
fclose(Arc2);
p[2]=0;
printf("valores de r para el archivo %s\n", Nombre2);
     for(i=0; i<l2-1; i++){
       for(j=(i+1);j<l2;j++){
           s=sqrt((pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2)+pow((z[i]-z[j]),2)));
           printf("%f\n", s);
           if(s<=b2[k] && s>b1[k]){
            c3[k]++;
            }
            p[2]++;
          }}

      printf("¿Qué estimador quiere usar?\n (1) Estimador simple.\n (2) Estimador de Landy-Szalay.\n");
      scanf("%i", &k);
      switch(k){
      case 1:
          for(i=0; i<L; i++){
          E=((p[2]/p[0])*(c1[i]/c3[i]))-1;
          fprintf(Res, "%i %f", i, E);
       }
      case 2: 
         for(i=0; i<L; i++){
         E=((c1[i]/p[0])-((2*c2[i])/p[1])+(c3[i]/p[2]))/(c3[i]/p[2]);
         fprintf(Res, "%i %f", i, E);
       }

}
return 0;
}

    
    

