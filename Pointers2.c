#include <stdio.h>
#include <inttypes.h>
#include <string.h>

void charcounter(char *str, uint8_t *result);



void charcounter(char *str, uint8_t *result){

uint8_t vcount=0, ccount=0, i;

for (i=0;*(str+i)!=0;i++){
      if((*(str+i) >= 'a' && *(str+i)<= 'z') || (*(str+i)>= 'A' && *(str+i)<= 'Z')||
         (*(str+i)>= 'a' && *(str+i)<= 'Z') || (*(str+i)>= 'A' && *(str+i)<= 'z')){
    if (*(str+i)=='a'||*(str+i)=='e'||*(str+i)=='i'||*(str+i)=='o'||*(str+i)=='u'||*(str+i)=='A'||*(str+i)=='E'||*(str+i)=='I'||*(str+i)=='O'||*(str+i)=='U'){
            vcount++;
            printf("%d",vcount);
            }
            else{
            ccount++;
            printf("%d",ccount);
            }
      }
}

*result=vcount;
*(result+1)=ccount;
}
