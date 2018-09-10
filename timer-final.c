#include <stdio.h>

int main(void){
int s;
int minut = 60;
int time = minut*60;
int dage = time*24;
int uge = dage*7;

printf("Skriv sekund tal \n");
scanf("%d",&s);
printf("uger:%d",s/uge);
s = s%uge;
printf("  dage:%d", s/dage);
s = s%dage;
printf(" time:%d", s/time);
s = s%time;
printf("  minutter:%d",s/minut);
s = s%minut;
printf("  Sekunder:%d\n",s);
}
