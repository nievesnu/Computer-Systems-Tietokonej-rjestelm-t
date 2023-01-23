#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <math.h>

// Function prototype
void movavg(float *array, uint8_t array_size, uint8_t window_size);

int main()
{
   
    float data[5] = { 1.0, 2.0, 4.0, 6.0, 9.0 };
    movavg(data, 5, 3);
   
    return 0;
}

void movavg(float *array, uint8_t array_size, uint8_t window_size){
    uint8_t i;
    float sol;
   
    for (i=0; i < window_size; i++) {
        sol+=array[i];
        sol += (1/3)*sol;
        printf("SMA is: %f", sol/array_size);
    }
}
