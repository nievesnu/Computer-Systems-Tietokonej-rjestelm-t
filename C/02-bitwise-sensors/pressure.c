
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <math.h>

// Function prototype
uint32_t pressure(uint8_t xlsb, uint8_t lsb, uint8_t msb);


uint32_t pressure(uint8_t xlsb, uint8_t lsb, uint8_t msb){
    uint32_t pressure;
    xlsb = xlsb>>4;
	uint32_t lsb_full_length;
    lsb_full_length = lsb<<4;
	uint32_t msb_full_length;
    msb_full_length = msb<<12;
	
   pressure = (msb_full_length|lsb_full_length|xlsb);
    return pressure;
}