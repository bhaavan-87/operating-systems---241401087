# Experiment 5: Producer Consumer Problem

## Aim
To implement Producer Consumer problem.

## Program

```c
#include <stdio.h>

int main()
{
    int buffer[5], in=0, out=0, choice, item;

    while(1)
    {
        printf("\n1. Produce 2. Consume 3. Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                if(in==5)
                    printf("Buffer Full\n");
                else
                {
                    printf("Enter item: ");
                    scanf("%d",&item);
                    buffer[in++] = item;
                }
                break;

            case 2:
                if(out==in)
                    printf("Buffer Empty\n");
                else
                    printf("Consumed item = %d\n", buffer[out++]);
                break;

            case 3:
                return 0;
        }
    }
}
```

## Output
Producer inserts items into buffer and consumer removes them.
