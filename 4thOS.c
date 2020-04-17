#include<fcntl.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<stdio.h>
#include<unistd.h>
int main()
{
	int n,fd,fd1;
	char buff[30];
	fd=open("file",O_CREAT|O_RDWR,0777);
	printf("\nenter the content to write in file\n");
	n=read(0,buff,n);
	write(fd,buff,n);
	printf("content stored in file1");
	printf("charecter of students copied");
	fd1=open("file1",O_CREAT|O_RDWR,0777);
	lseek(fd,6,SEEK_SET);
	n=read(fd,buff,30);
	write(fd1,buff,n);
	write(1,buff,n);
    return 0;
}
