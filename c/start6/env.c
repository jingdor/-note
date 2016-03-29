#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

//int getopt(int argc ,char *const argv[],const char *optstring);
//extern char *optarg;
//extern int optind,opterr,optopt;
extern char **environ;
int main(int argc ,char *argv[]){
	printf("%d",argc);
	printf("%s",argv[1]);
//getopt      短参数
//getopt_long 长参数
	printf("%s\r\n",getenv(argv[1]));
	char ** env =environ;
	while (*env){
		printf("%s\n",*env);
		env++;
	}
	
}
