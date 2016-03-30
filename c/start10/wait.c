#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <wait.h>
#include <time.h>

int subp(){
	printf("%d",getpid());
	int i=10;
	while (1){
		i--;
		if(i<0){
			break;
		}	
		sleep(1);
		printf("%d\r\n",i);
	}
	return 0;
}


int main(){
	pid_t pid;
	int exit_code;
	int i=0;
	//for(i;i<10;i++){
		pid=fork();
		switch(pid){
			case -1 :
				break;
			case 0:
				subp();
				exit_code=37;
				break;	
			default:
				break;
		}	
	//}
	if(pid!=0){
		int stat_val;
		pid_t  child_pid;
		child_pid=wait(&stat_val);
		

//WAIT宏
//WIFEXITED 正常结束非0
//WEXITSTSTUS  WIFEXITED 正常退出码
//WIFSIGNALED 未捕捉信号关闭
//WTERMSIG 	WIFSIGNALED 非0 信号代码
//WIFSTOPPED	 意外终止 取非0
//WSTOPSIGN 	WIFSTOPPED 非0 返回信号代码
		if(WIFEXITED(stat_val))
			printf("child id %d",WEXITSTATUS(stat_val));
		else{
			printf("child terminated abnormally");
		}
	}
	exit(exit_code);
}
