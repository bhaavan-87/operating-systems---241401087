
# Experiment 4: System Calls

## Programs Performed

1. fork() system call
2. getpid() system call

## Program 1: fork()

```c
#include <stdio.h>
#include <unistd.h>

int main()
{
    fork();
    printf("Hello from process\n");
    return 0;
}
```

## Output
Hello from process
Hello from process


## Program 2: getpid()

```c
#include <stdio.h>
#include <unistd.h>

int main()
{
   printf("Process ID: %d\n", getpid());
   return 0;
}
```

## Output
Displays current process ID.
