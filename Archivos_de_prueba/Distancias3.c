#include <stdio.h>
#include <math.h>

int main(){
    
    FILE *ale;
  
   float x, y ,z;
   ale=fopen("Aleatorios.txt","r");
	fscanf(ale,"%f %f %f",&x, &y, &z);
	printf(" %f  %f  %f\n", x, y , z);
fclose(ale);
 return 0;
}
