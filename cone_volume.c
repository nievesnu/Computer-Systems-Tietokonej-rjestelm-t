#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double cone_volume(float a, float b);
double cone_volume(float a, float b){
	  return (M_PI * a * a * b) / 3;
}