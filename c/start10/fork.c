#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main(){
	pid_t pid;
	char *message;
	int n;
	printf("start fork");
	pid=fork();
	switch(pid){
		case -1:
			printf("fork error\n");
			break;
		case 0:	
			printf("child\n");
			break;
		default:
			printf("parent\n");
			break;
	}
	printf("%d",pid);
	while (1){
	}
}
