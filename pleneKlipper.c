#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void){

double yardLength, yardWidth, yardArea;
double houseLength, houseWidth, houseArea;
double plainArea ,sekunderAntal;

//Yard area

printf("Indtast have mael:\n");
scanf(" %lf",&yardLength);
scanf("%lf",&yardWidth);

printf("Indtast hus mael: \n");
scanf(" %lf %lf", &houseLength, &houseWidth);

//House area


//plainArea

yardArea = yardLength * yardWidth;
plainArea = yardArea - houseArea;
houseArea = houseLength * houseWidth;

printf("Plaene areal: %lf \n", plainArea);
sekunderAntal = plainArea/2;

printf("sekunder til klipning:  %lf", sekunderAntal);



  

}
