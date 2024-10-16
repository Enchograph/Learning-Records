#include <stdio.h>
int main(void){
	_Bool a=0;
	if(a){
		printf("hello");
	}else{
		a++;
		printf("world");
	}
	return 0;
}