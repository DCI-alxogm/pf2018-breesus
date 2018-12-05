/*Programa creado el 5 de diciembre de 2018.
El objetivo de este codigo sera calcular la función correlación conforme a los estimadores, usando 2, a elección del usuario.*/

#include<stdlib.h>
#include<math.h>
#include<stdio.h>

int main(){
    int Nr, Nd, Ndr, DD, RR, DR, i; //Se declaran variables enteras para los conteos.
    float Es, Els;  //Se declaran variables para los estimadores.
    
    printf("Escoja el número del estimador que desea usar.\n (1) Estimador simple.\n (2) Estimador de Landy-Szalay.");
    scanf("%i", &i);
    
    switch(i){
          case 1:   //Estimador simple.
          
                 Es=((Nr/Nd)(DD/RR))-1

          case 2:   //Estimador de Landy-Szalay.

                 Els=((DD/Nd)-(2DR/Ndr)+(RR/Nr))/(RR/Nr)
          }


