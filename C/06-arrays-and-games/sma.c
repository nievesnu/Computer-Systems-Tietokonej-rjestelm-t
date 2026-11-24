#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <math.h>

// Function prototype
void movavg(float *array, uint8_t array_size, uint8_t window_size);

void movavg(float *array, uint8_t array_size, uint8_t window_size){
    uint8_t i, j, k=0, l;
    float sol1;
    if(window_size==0 || window_size>array_size){
        return;
    }
    float store[array_size-window_size+1];
    for (i=0; i < array_size-window_size + 1; i++) {
        sol1=0;
        for (j=0; j < window_size; j++) {
            sol1+=array[i+j];
        }
        sol1 = sol1/window_size;
        store[k] = sol1;
        k++;
    }
     for (l=0; l < array_size-window_size +1; l++){
        printf("%.2f", store[l]);
        if(l <= array_size-window_size -1 ){
             printf(",");
        }
    }
}
