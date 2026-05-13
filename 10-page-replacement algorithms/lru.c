
#include<stdio.h>

int main()
{
    int pages[50], frame[10], time[10];
    int n, f, i, j, pos;
    int faults = 0, cnt = 0, flag;

    printf("Enter number of pages: ");
    scanf("%d", &n);

    printf("Enter page reference string:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &pages[i]);

    printf("Enter number of frames: ");
    scanf("%d", &f);

    for(i = 0; i < f; i++)
    {
        frame[i] = -1;
        time[i] = 0;
    }

    for(i = 0; i < n; i++)
    {
        flag = 0;

        for(j = 0; j < f; j++)
        {
            if(frame[j] == pages[i])
            {
                cnt++;
                time[j] = cnt;
                flag = 1;
                break;
            }
        }

        if(flag == 0)
        {
            pos = 0;

            for(j = 1; j < f; j++)
            {
                if(time[j] < time[pos])
                    pos = j;
            }

            cnt++;
            frame[pos] = pages[i];
            time[pos] = cnt;
            faults++;
        }
    }

    printf("Total Page Faults = %d\n", faults);

    return 0;
}
