#include<stdio.h>
#define max 50
void main()
{
    int n,i;
    float awt=0,atat=0;
    printf("Enter the no. of Process:  ");
    scanf("%d",&n);
    int bt[n],at[n],wt[n],tat[n],temp[n];
    printf("Enter the Burst Time of the Process:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    printf("Enter the Arrival Time of the process:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&at[i]);
    }
    temp[0]=0;
    printf("Process\t Burst Time\t Arrival Time\t Waiting Time\t Turn Around Time\n");
    //Logic For Finding the Waiting Time and Turn Around Time
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        temp[i+1]=temp[i]+bt[i];
        wt[i]=temp[i]-at[i];
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],at[i],wt[i],tat[i]);
    }
    //Syntax for finding Average Waiting Time and Average Turn Around time
    printf("Average Waiting Time = %f",awt/n);
    printf("Average Turn Around Time = %f",atat/n);
}



OUTPUT:

Enter the no. of Process:  3
Enter the Burst Time of the Process:5 9 6
Enter the Arrival Time of the process:0 3 6
Process  Burst Time      Arrival Time    Waiting Time    Turn Around Time
1       5               0               0               5
2       9               3               2               11
3       6               6               8               14
Average Waiting Time = 3.333333Average Turn Around Time = 10.000000
