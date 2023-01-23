#include <stdio.h>
#include <inttypes.h>
#include <math.h>

// Function prototype
float humidity(uint16_t reg);

int main()
{
    uint16_t data = 0b1000000000000000;
    float sol = humidity(data);

    return sol;
}

float humidity(uint16_t reg){
    
    return (reg/pow(2, 16))*100;
}