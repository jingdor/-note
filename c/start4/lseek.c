#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(){
	int fd;
	int uid;
	struct stat statbuf;
	fd=open("test.txt",O_RDONLY);	
	if(fd<2){
		printf("打开文件失败");
	}
	fstat(fd,&statbuf);
	printf("%d",statbuf.st_nlink);
//lseek 函数原型
//lseek(int fildes,off_t offset,int whence);
//whence 选项
//	SEEK_SET 绝对位置
//	SEEK_CUR 相对当前位置
//	SEEK_END 相对文件末尾
	

//fstat stat lstat
// stat 和lstat 都是对文件的 
// fstat 是对打开的文件描述符的
// 返回值是一个 stat buff 结构类型
// stat 结构在stath 中定义
// stat 成员
// st_mode 文件权限和文件类型信息
// st_ino 与该文件关联的 node
// dt_dev 保存文件的 dev 设备
// st_uid 文件属主uid 
// st_gid 文件属主gid
// st_atime 上次访问时间
// st_ctime 上次权限属主组内容修改时间
// st_mtime 上次修改时间
// st_nlink 硬链接个数
//
//
//
// dup dup2 系统调用以后再说
//
	
}
