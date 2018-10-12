#include <stdio.h>

#include <stdlib.h>

#include <math.h>

#include <string.h>
int    main () {
int a,b,small,big,gcdTest,gcd,remainder, gcdEuclid, ret;
int answer;

do{
printf("Enter two positive integers:\n");

scanf("%d",&a);
scanf("%d",&b);
if(a < 0 || b < 0){
    printf("Can't you read?!\n");
    printf("Try agian\n\n");
}
}while(a < 0 || b < 0);

small = a <= b ? a : b;
big = a <= b ? b : a;


gcdTest = small;
for(int i = 1; big%gcdTest != 0; i++){
    if(small%i == 0){
    gcdTest = small/i;
    }

}
printf("The greates common divisor of %d and %d is %d\n\n",small, big,gcdTest);
gcd = gcdTest;

printf("Do you want to compare it with the result from  Euclids algoritm?\n");
printf("Type 1 for yes and anything else for no\n");
scanf("%d",&answer);

if (answer == 1){
    
    while (small > 0){
    remainder = big % small;
    big = small;
    small = remainder;
  }
gcdEuclid = big;
    printf("Comparing the two resultes\n");
    printf("Result from the program = %d\n", gcd);
    printf("Result from Euclids algoritm = %d\n\n", gcdEuclid);
    if(gcd == gcdEuclid){
        printf("Wow thier the same :O");
    }else{
        printf("Ups....");
    }
}else {
    printf("bye. see you later ;) ");
}

}
