#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int amount_of_year_for_fixed_growth(double beginPop, double maxPop, double increase);


int main(void){
double antalFolk, maxPop, popIncreas;
int  years;

printf("Enter amount of people:`\n");
scanf("%lf",&antalFolk);
printf("Enter max amount of people:`\n");
scanf("%lf",&maxPop);
printf("Enter rate of fucking");
scanf("%lf",&popIncreas);

printf("it took %d years for the town to surpass a population of 30k",amount_of_year_for_fixed_growth(antalFolk,maxPop , popIncreas));
    
}
int amount_of_year_for_fixed_growth(double beginPop, double maxPop, double increase){
    int years = 0;
    while(beginPop < maxPop ) {
    years++;
    beginPop = beginPop*increase;
}
return(years);
}
