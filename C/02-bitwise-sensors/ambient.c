#include <stdio.h>
#include <inttypes.h>
#include <math.h>
#define MASK_E 0b0000111111111111 //E
#define MASK_R 0b1111000000000000 //R



// Function prototype
float light(uint16_t reg);

int main()
{
   
    uint16_t data = 0b0110110000110101;
    float sol = light(data);
    printf("Lux is: %f", sol);
    
    return 0;
}

float light(uint16_t reg){
    
    uint16_t sol1= reg &(~(MASK_E));
    sol1 = sol1>>12;
    
    uint16_t sol2= reg &(~(MASK_R));
    
    float lux = 0.01 * pow(2, sol1) * sol2;
    return lux;
}