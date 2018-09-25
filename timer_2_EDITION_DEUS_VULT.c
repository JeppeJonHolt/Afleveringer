#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//Ved godt at jeg, måske ikke helt har løst den som man skal, men synes at min løsning er sjovere. B)
//Size matters
#define SEC 1
#define SEC_MINUTE SEC*60
#define SEC_HOUR SEC_MINUTE*60
#define SEC_DAY SEC_HOUR*24
#define SEC_WEEK SEC_DAY*7

int main(void){
    int s , uge ,hour ,day ,week, alt, a , i;
    char unit[6];
    printf("Skriv sekund tal \n");
    scanf("%d",&s);
    for(i = 1, a = 1; i<6; i++, a++){
        switch(a){case 1: alt = SEC_WEEK; strcpy(unit, "Week");  break; case 2: alt = SEC_DAY; strcpy(unit, "Day"); break; case 3: alt = SEC_HOUR; strcpy(unit, "Hour"); break; case 4:alt = SEC_MINUTE; strcpy(unit,"Minute"); break; case 5: alt = SEC; strcpy(unit, "Secound"); break; default: printf("?!?ABORT MISSION!!");}
        if (s/alt != 0){
            printf("%s%s: %d  ",unit,(s/alt > 1) ? "s" : "", s/alt);
            }
        s = s%alt;
        
    }
}
