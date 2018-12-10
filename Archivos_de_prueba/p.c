#include<stdlib.h>
#include<math.h>
#include<stdio.h>   //Se incluyen todas las librerias que se van a utilizar a lo largo del programa.
#include<time.h>
#include<string.h>

void Aleatorios(int n);
int Lineas(char Nombre[40]);    //Se declaran las 2 funciones que usaremos, una para generar un archivo de puntos aleatorios, y otra para contar lineas de archivo, valor que necesitaremos para los ciclos.

int main(){
    int l1, l2, i, j, c1[100],c2[100], c3[100], k, p[2], o; 
    char Respuesta[3], Nombre1[40], Nombre2[40]="Aleatorios.txt", Nombre3[40];
    float r2, s, x[1000], y[1000], z[1000], L, b2[100], b1[100], E;
    FILE*Arc;   //Se declaran las variables de control que usaremos.
    FILE*Arc2;
    FILE*Res;

    printf("Introduzca el nombre del archivo donde se colocaran los resultados.\n");
    scanf("%s", Nombre3);  //Pedimos el nombre del archivo donde se depositaran los resultados de los estimadores.
    printf("Introduzca el tamaño de los lados del cubo en el que se trabajara.\n");
    scanf("%f", &L);  //El tamaño del cubo nos servira para los limites de los puntos aleatorios, y por que es una eleccion del usuario.
    printf("¿De qué archivo se tomarán los puntos?");
    scanf("%s", Nombre1);     //Se pregunta el primer archivo del que se tomaran puntos.
    l1=Lineas(Nombre1);  //Se usa la funcion "Lineas" para hacer el conteo de puntos.
    printf("¿Quíere usar un archivo con puntos aleatorios para los estimadores?(S/N)\n");   //Se da la opción de usar otro archivo, o generar uno de puntos aleatorios.
    scanf("%s", Respuesta);
    if(strcmp(Respuesta, "S") == 0){
      printf("Introduzca el número de puntos aleatorios a generar.\n");
      scanf("%i", &l2);
      Aleatorios(l2);    //Se genera el archivo de puntos aleatorios si es necesario.
      
      }else{
      printf("¿De que otro archivo se tomarán los puntos?\n");      //Si no es el caso, se pregunta por el 2do archivo de puntos.
      scanf("%s", Nombre2);
      l2=Lineas(Nombre2);  //Se cuentan las lineas del 2do archivo.
      printf("El archivo tiene %i lineas.\n", l2);
      printf("%s", Nombre2);
      }     
     printf("Introduce el tamaño del bin con el que se evaluaran los estimadores, si desea hacer evaluación unidad por unidad, presione 1.\n");
     scanf("%f", &r2);   //Se pide la diferencia de los radios que conformaran el bin.

     Res=fopen(Nombre3, "w");
   b2[0]=0;    
    
    for(k=0; b2[k]<(L/2); k++){     //Se hace un ciclo for para hacer los calculos las veces necesarias.
    b1[k]=b1[k-1]+r2;
    b2[k]=b2[k-1]+r2;
    }
    Arc=fopen(Nombre1, "r");
    for(i=0; i<l1-1; i++){
       fscanf(Arc, "%f %f %f", &x[i], &y[i], &z[i]);  //Se toman los puntos necesarios, esto se hará varias veces para hacer los calculos.
      
}
fclose(Arc);
p[0]=0;
     for(i=0; i<l1-1; i++){ //Comienzan los calculos
       for(j=(i+1);j<l1-1;j++){
           s=sqrt((pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2)+pow((z[i]-z[j]),2)));
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
 for(i=0; i<l1-1; i++){
       for(j=0;j<l2-1;j++){
           s=sqrt((pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2)+pow((z[i]-z[j]),2))); //Continuan calculos de las distancias.
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
     for(i=0; i<l2-1; i++){
       for(j=(i+1);j<l2;j++){
           s=sqrt((pow((x[i]-x[j]),2)+pow((y[i]-y[j]),2)+pow((z[i]-z[j]),2)));    //Ultimo ciclo para los calculos
           if(s<=b2[k] && s>b1[k]){
            c3[k]++;
            }
            p[2]++;
          }}
      if(l1>l2){
      o=l2;}
      else{
      o=l1;
      }
printf("%i %i %i",c3[0], p[0], c1[0]); 
      printf("¿Qué estimador quiere usar?\n (1) Estimador simple.\n (2) Estimador de Landy-Szalay.\n");
      scanf("%i", &k);
      switch(k){ //Se da la opción de utilizar distintos estimadores.
      case 1:
          for(i=1; i<o; i++){
          E=((p[2]/(p[0]+1))*(c1[i]/(c3[i]+1)))-1;
          fprintf(Res, "%i %f", i, E);
       }
      case 2: 
         for(i=1; i<o; i++){
         E=((c1[i]/p[0])-((2*c2[i])/p[1])+(c3[i]/p[2]))/((c3[i]/p[2])+1);
         fprintf(Res, "%i %f\n", i, E);
       }
      
}
return 0;
}

    
    

