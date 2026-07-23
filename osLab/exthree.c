#include<stdio.h>
#include<unistd.h>

int main()
{
    __pid_t pid;

    printf("Program execution started\n");
    pid = fork();

    if(pid<0)
    {
        printf("Unable to create Child process\n");
        return 1;
    }

    else if(pid == 0)
    {
        printf("\n---Child Process---\n");

        printf("Child process ID: %d\n",getpid());

        printf("Parent Process ID:%d\n",getpid());
    }
    
    else

    {
        printf("\n---Parent process---\n");
        printf("Parent Process ID: %d\n", getpid());
        printf("Child Process ID: %d\n",pid);
    }

    printf("\nProcess execution completed\n");

    return 0;
}