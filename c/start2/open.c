#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(){
	int fd1,fd2,fd3,fd0,fd4,fd5,fd6,fd7,fd8,fd9;
	fd1=open("test1.txt",O_RDONLY);
	fd2=open("test2.txt",O_WRONLY);
	fd3=open("test3.txt",O_CREAT);
	close(fd3);
	fd4=open("test4.txt",O_APPEND);
	fd5=open("test5.txt",O_TRUNC);
	fd6=open("test6.txt",O_EXCL);
	fd7=open("test7.txt",O_CREAT,S_IXUSR|S_IRUSR|S_IWUSR);
	close(fd4);
	fd8=open("test8.txt",O_CREAT,S_IXGRP|S_IRGRP|S_IWGRP);
	close(fd8);
	fd9=open("test9.txt",O_CREAT,S_IXOTH|S_IROTH|S_IWOTH);
	close(fd9);
	printf("%d\r\n%d\r\n%d\r\n%d\r\n%d\r\n%d\r\n%d\r\n%d\r\n%d\r\n",fd1,fd2,fd3,fd4,fd5,fd6,fd7,fd8,fd9);
	
}
