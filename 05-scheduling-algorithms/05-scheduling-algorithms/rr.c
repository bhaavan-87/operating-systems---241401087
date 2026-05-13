#include<stdio.h>

int main()
{
    int i, n, tq, remain, count = 0;
    int bt[10], rt[10];
    int wt = 0, tat = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    remain = n;

    printf("Enter Burst Time:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
        rt[i] = bt[i];
    }

    printf("Enter Time Quantum: ");
    scanf("%d", &tq);

    i = 0;

    while(remain != 0)
    {
        if(rt[i] <= tq && rt[i] > 0)
        {
            count += rt[i];
            rt[i] = 0;
            remain--;
        }
        else if(rt[i] > 0)
        {
            rt[i] -= tq;
            count += tq;
        }

        if(rt[i] == 0)
        {
            tat += count;
            wt += count - bt[i];
        }

        if(i == n-1)
            i = 0;
        else
            i++;
    }

    printf("\nAverage Waiting Time = %f\n", (float)wt/n);
    printf("Average Turnaround Time = %f\n", (float)tat/n);

    return 0;
}
