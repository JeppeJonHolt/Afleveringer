#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void){
double m, n, mp, np;
double side1, side2, hypotenuse;
prinf("Skriv to doubles:");
scanf("%lf",&m);
scanf("%lf",&n);

printf("\nmp = %f\n",mp = pow(m,2));
printf("np = %f\n",np = pow(n,2));

 printf("Side1 = %f\n",side1 = mp - np);
 printf("Side2 = %f\n",side2 = 2*m*n);
  printf("hypotenuse = %f\n",hypotenuse = mp+np);
  
}
