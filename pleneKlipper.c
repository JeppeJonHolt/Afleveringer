#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
double yardLength, yardWidth, yardArea;
double houseLength, houseWidth,houseArea;
double plainArea,sekunderAntal;

//Yard area
printf("Indtast have mål: \n");
scanf(" %lf %lf",yardLength, yardWidth);
yardArea = yardLength*yardWidth;

//House area
printf("Indtast hus mål: \n");
scanf(" %lf %lf",houseLength, houseWidth);
houseArea = houseLength*houseWidth;

//plainArea
plainArea = yardArea - houseArea;

printf("Plaene areal: %lf \n" plainArea);

sekunderAntal = plainArea/2;
printf("sekunder til klipning:  %lf", sekunderAntal)





    
    
    

 return EXIT_SUCCES;   
}
