#include <stdio.h>

int main(){
	printf("start2 \r\n");
	char buffer[5];
	int r;
	if(r=read(0,buffer,5)){
		printf(buffer);
		exit(0);
	}else{
		printf("fails");
		exit(1);
	}
}
