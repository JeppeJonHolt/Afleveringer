#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int sum_adder(int n);

int sum_tester(int n);

int equal_tester_print(int a, int b);

int main(void){
int sumTotal, n;

printf("Enter n");
scanf("%d",&n);

//sumTotal = sum_adder(n);
printf("First funtion: %d\n",sum_adder(n));

printf("Secound function: %d\n",sum_tester(n));

equal_tester_print(sum_adder(n),sum_tester(n));


    
}

int sum_adder(int n){
    int sum = 0;
    for(int i = 0; i <= n ; i++){
        sum += i;
    }
    return(sum);
}
int sum_tester(int n){
    return((n+1)*n/2);
}
int equal_tester_print (int a, int b){
    if(a == b){
    printf("Yasss");
}else{
    printf("Wut?");
}
}
