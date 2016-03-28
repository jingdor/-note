#include <stdio.h>

int main(){
	printf("start2 \r\n");
//系统调用 write 第一个参数为输出到的 fd 文件描述符 第二个 为 输出字符串 buff 第三个为 buff长度
	if(write(1,"hello liunx api",16)){
		printf("success");
		exit(0);
	}else{
		printf("fails");
		exit(1);
	}
}
