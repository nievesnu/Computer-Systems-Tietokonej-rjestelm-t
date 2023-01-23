#include <stdio.h>

void write_sensors(char *str, float ax, float ay, float az, float press, float temp);


void write_sensors(char *str, float ax, float ay, float az, float press, float temp){

sprintf(str,"%+.2f,%+.2f,%+.2f,%.0f,%.2f", ax, ay, az, press, temp); 
}