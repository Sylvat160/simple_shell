#include "shell.h"

int main(void)
{
    char *cmd = NULL;
    size_t len = 0;
    char *stkn;
    pid_t pid;
    int status;

    while (1)
    {
        printf("$ ");
        getline(&cmd, &len, stdin);
        stkn = strtok(cmd, " \n");
        char *arr[] = {stkn, NULL};
        pid = fork();
        
        if (pid == -1)
        {
            perror("Error");
            return (1);
        }

        if (pid == 0)
        {
            if (execve(stkn, arr, NULL) == -1)
            {
                perror("Error");
            }
        }
        else
        {
            wait(&status);
        }
    }


    return 0;
}
