#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main(){
fork();//create copy of the process with diff id
fork();
printf("Hello...\n");
printf("Process ID is %d\n",getpid());
return 0;
}
