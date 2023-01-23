#include<stdio.h> 
#include <inttypes.h>

int64_t factorial(int8_t n);
  
int64_t factorial(int8_t n){
    int64_t i, fact=1;
    if(n>20){
        return -1;}
    else{
        for (i=1;i<=n;i++){    
            fact*=i;
        } 
    return fact;
    }  
}