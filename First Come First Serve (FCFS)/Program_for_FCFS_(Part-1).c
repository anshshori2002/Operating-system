#include<stdio.h>
#define max 50
void main()
{
    int i,j,n,bt[max],wt[max],tat[max];
    float awt=0,atat=0;
    printf("Enter the no. of process: ");
    scanf("%d",&n);
    printf("Enter the burst time of process: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
    }
    printf("Process\t Burst Time\t Waiting Time\t Turn Around Time\n");
    for(i=0;i<n;i++)
    {
        wt[i]=0;
        tat[i]=0;
        //Calculating the Waiting Time
        for(j=0;j<i;j++)
        {
            wt[i]=wt[i]+bt[j];
        }
        //Calculating the Turn Around Time
        tat[i]=wt[i]+bt[i];
        //Calculating the Total Waiting Time
        awt=awt+wt[i];
        //Calculating the Total Turn Around Time
        atat=atat+tat[i];
        printf("%d\t%d\t\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]); 
    }
    //Printing the Average Turn Around time and Waiting Time
    printf("Average waiting time = %f\n",awt/n);
    printf("Average Turn around time = %f",atat/n);
}

OUTPUT :

Enter the no. of process: 4
Enter the burst time of process: 7 13 5 9
Process  Burst Time      Waiting Time    Turn Around Time
1          7                    0               7
2         13                    7               20
3          5                    20              25
4          9                    25              34
Average waiting time = 13.000000
Average Turn around time = 21.500000
