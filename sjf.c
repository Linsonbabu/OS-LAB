#include<stdio.h>
struct sjf{
int pid;
int atime,btime,wtime,ttime,cmtime;
}p[10];
void main(){
int i,j,n;
struct sjf temp;
double Awtime=0;
double Attime=0;
printf("Enter the no of process:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("|PROCESS ID|,|BURSTTIME|,|ARIVALTIME|");
printf("\n");
scanf("%d%d%d",&p[i].pid,&p[i].btime,&p[i].atime);
}
p[0].cmtime=p[0].btime;
p[0].ttime=p[0].cmtime-p[0].atime;
p[0].wtime=p[0].ttime-p[0].btime;
for(i=1;i<n-1;i++){
for(j=i+1;j<n;j++){
if(p[i].btime>p[j].btime){
temp=p[i];
p[i]=p[j];
p[j]=temp;
}
}
}for(i=1;i<n;i++){
p[i].cmtime=p[i-1].cmtime+p[i].btime;
p[i].ttime=p[i].cmtime-p[i].atime;
p[i].wtime=p[i].ttime-p[i].btime;

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

