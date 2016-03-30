#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <time.h>

int subp(){
	printf("%d",getpid());
	printf("我是子进程\r\n");
	sleep(10);
	exit(0);
}


int main(){
	pid_t pid;
	int i=0;
	for(i;i<10;i++){
		pid=fork();
		switch(pid){
			case -1 :
				break;
			case 0:
				subp();	
				break;	
			default:
				break;
		}	
	}
	printf("运行结束了");
}
