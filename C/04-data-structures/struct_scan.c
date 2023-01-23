#include <stdio.h>
#include <inttypes.h>

struct mpudata_t {
    float data[6];
};

void scan(struct mpudata_t mpu, uint8_t index, float threshold);

void scan(struct mpudata_t mpu, uint8_t index, float threshold){

	if (mpu.data[index]>threshold){
		for (int i=0;i<6;i++){
			if (i!=5){
				printf ("%.2f,",mpu.data[i]);
			} else {
				printf ("%.2f\n", mpu.data[i]);
			}
		}
	}
}