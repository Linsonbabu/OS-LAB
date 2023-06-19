#include<stdio.h>
struct fcfs{
int pid;
int atime,btime,wtime,ttime,cmtime;
}p[10];
int main(){
int i,n;
double Awtime=0;
double Attime=0;
printf("Enter the no of process:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("|PROCESS ID|,|BURSTTIME|,|ARIVALTIME|");
printf("\n");
scanf("%d%d%d",&p[i].pid,&p[i].btime,&p[i].atime);

p[i].cmtime=p[i-1].cmtime+p[i].btime;
p[i].ttime=p[i].cmtime-p[i].atime;
Attime=Attime+p[i].ttime;
p[i].wtime=p[i].ttime-p[i].btime;
Awtime=Awtime+p[i].wtime;
}
puts("|Pid |Bt |At |Ct |Tat |Wt |");
for(i=0;i<n;i++){
printf("|P%d |%d |%d |%d |%d |%d |\n",p[i].pid,p[i].btime,p[i].atime,p[i].cmtime,p[i].ttime,p[i].wtime);
}
puts("\n");
printf("AVERAGE TURN AROUND TIME : %f\n",Awtime/n);
printf("AVERAGE WAITIING TIME : %f",Attime/n);
puts("\n");
}

