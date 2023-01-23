#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <time.h>

void shuffle(uint8_t *list, uint16_t list_size);

void shuffle(uint8_t *list, uint16_t list_size){

    int i,j;
    int range=list_size;
    uint8_t scratch;
    scratch = malloc(sizeof(uint8_t) * list_size);
    int index;

    for (j=0;j<list_size;j++){
        scratch[j] = list[j] ;
    }

    for (i=list_size-1;i>=0;i--){
            do{
                index=rand()%range;
            } while (scratch[index]==-1);
             list[i]  =  scratch[index];
            scratch[index]=-1;
    }
}