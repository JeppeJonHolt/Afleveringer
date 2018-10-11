#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
   int i,n, num = 1, p = 0;
   printf("Please enter a number: \n");
   scanf("%d", &n);
   
   while(n >= num){
       p = 0;
       num++;
   for(i=1; i <= num; i++){
      if(num%i==0){
         p++;
      }
   }
   if(p==2){
      printf("%d is a prime number.",num);
   }
   }
   }
