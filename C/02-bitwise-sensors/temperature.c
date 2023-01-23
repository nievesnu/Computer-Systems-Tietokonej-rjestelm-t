#include <stdio.h>
#include <inttypes.h>

// Function prototype
float temperature(uint16_t reg, float factor);

int main()
{
    uint16_t data = 0b0011001000000000;
    float value = 0.03125;
    float sol = temperature(data, value);

    return sol;
}


float temperature(uint16_t reg, float factor){
    
    reg = reg>>2;
    return reg*factor;
}