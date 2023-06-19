#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<errno.h>
#include<unistd.h>
#include <string.h>
int openf()
{
char c;	
int fd = open("a.txt", O_RDONLY | O_CREAT);
printf("fd = %d\n",fd);
if (fd ==-1)
{
printf("An error occured!");
}
else puts("File opened successfully");
 return 0;
 }
 void readf(){
int fd = open("a.txt", O_RDONLY);
char buffer[100];
read(fd,&buffer,100);
puts("read successfully!");
printf("%s",buffer);
}
void writef(){
int fd = open("a.txt",O_WRONLY);
char buff;
buff= write(fd,"hello cek\n",strlen("hello cek\n"));
printf("written successfully\n",buff);
}
void main(){
openf();
writef();
readf();
}

