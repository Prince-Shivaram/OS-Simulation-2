#include<stdio.h>
#include<conio.h>
int main()
{
    int s;
    int bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j;
    printf("Enter 5 Postive integers:\n");
    s=5;
    for(i=0;i<s;i++)
    {
        scanf("%d",(bt+i));
    }
    wt[0]=0;
    for(i=1;i<s;i++)
    {
        *(wt+i)=0;
        for(j=0;j<i;j++)
            *(wt+i)+=*(bt+i);
    }
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
    for(i=0;i<s;i++)
    {
        tat[i]=*(bt+i)+*(wt+i);
        avwt+=*(wt+i);
        avtat+=*(tat+i);
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
    }
    avwt/=i;
    avtat/=i;
    printf("\n\n Waiting Time on average=%d",avwt);
    printf("\n Turnaround Time on average=%d",avtat);
    return 0;
}
