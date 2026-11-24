#include <stdio.h>
#include <inttypes.h>
#include <string.h>

void charcounter(char *str, uint8_t *result);

void charcounter(char *str, uint8_t *result){

uint8_t v_count=0, c_count=0;
int i;

	for (i=0;*(str+i)!=0;i++){
		  if((*(str+i) >= 'a' && *(str+i)<= 'z') || (*(str+i)>= 'A' && *(str+i)<= 'Z')){
			if (*(str+i)=='a'||*(str+i)=='e'||*(str+i)=='i'||*(str+i)=='o'||*(str+i)=='u'||*(str+i)=='A'||*(str+i)=='E'||*(str+i)=='I'||*(str+i)=='O'||*(str+i)=='U'){
				v_count++;
			}else{
				c_count++;
			}
		}
	}
	*result = v_count;
	*(result+1) = c_count;
}
