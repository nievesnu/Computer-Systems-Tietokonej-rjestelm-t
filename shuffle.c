#include <stdio.h>
#include <inttypes.h>
#include <stdlib.h>
#include <time.h>

void shuffle(uint8_t *list, uint16_t list_size);

int main() {

    srand (time(NULL));
    uint8_t size=rand();
    uint8_t list[size];
    for (int i=0; i<size;i++){
        list[i]=rand()%10;
    }
    for (int i=0;i<size;i++){
    printf("%d",list[i]);
    }
    printf("\n");
    shuffle(&list,size);
    for (int i=0;i<size;i++){
    printf("%d",list[i]);
    }
    return 0;
}

void shuffle(uint8_t *list, uint16_t list_size){

    int i,j;
    int range=list_size;
    int scratch[list_size];
    int index;

    for (j=0;j<list_size;j++){
        scratch[j]=*(list+j);
    }

    for (i=list_size-1;i>=0;i--){
            do{
                index=rand()%range;
            } while (scratch[index]==-1);
            *(list+i) = scratch[index];
            scratch[index]=-1;
    }
}
