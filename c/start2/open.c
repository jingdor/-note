#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(){
	open("test1.txt",O_RDONLY);
	open("test2.txt",O_WRONLY);
	open("test3.txt",O_CREAT);
	open("test4.txt",O_APPEND);
	open("test5.txt",O_TRUNC);
	open("test6.txt",O_EXCL);
	open("test7.txt",O_CREAT,S_IXUSR|S_IRUSR|S_IWUSR);
	open("test8.txt",O_CREAT,S_IXGRP|S_IRGRP|S_IWGRP);
	open("test9.txt",O_CREAT,S_IXOTH|S_IROTH|S_IWOTH);
}
