#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <error.h>

extern int errno;

int main(){
	char dir[200];
	chmod("test1.txt",0222);
//修改文件权限系统调用
	chown("test1,txt",1,1);
//修改文件所有权
	
// unlink 删除链接
// link 创建链接
// symlink 创建链接
// mkdir 创建目录
// rmdir  删除目录
// getcwd 获取当前目录
	getcwd(dir,200);
	printf("%s\r\n",dir);
//opendir
//closedir
//telldir
//seekdir
//closedir
	opendir("aa");
}
