#include<stdlib.h>
#include<math.h>
#include<stdio.h>
#include<time.h>

void Aleatorios(int n);
int Lineas();

int main(){
    int n;
    int l;
    
    printf("Introduzca el número de puntos aleatorios a generar.\n");
    scanf("%i", &n);
    Aleatorios(n);
    l=Lineas();
    printf("El archivo tiene %i lineas.\n", l);
    return 0;
}
