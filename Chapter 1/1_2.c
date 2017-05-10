#include <stdio.h>
void main(){

	char *str, tmp;
	scanf("%s", str);
	char *end = str;
	if(str){
		while(*end)
			++end;
	}
	
	while(str <= end){

		tmp = *str;
		*str++ = *end;
		*end-- = tmp; 
	}
	printf("%s\n", end);
}