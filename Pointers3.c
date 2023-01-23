#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include <stdlib.h>

float mean(char *list);


float mean(char *list){
    char separation[]=",";
    float sum=0, result=0, nums=0;
    char *token;
    token=strtok(list,separation);

    while(token!=NULL){
        sum+=atof(token);
          token=strtok(NULL,separation);
          nums++;
          }
    result=sum/nums;
    return result;
}
