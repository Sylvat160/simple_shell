#include "shell.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
char *command = NULL;
size_t size = 0;
pid_t pid;
int status;

while (1)
{
printf("$ ");
getline(&command, &size, stdin);
/* remove newline */
strtok(command, "\n");

_chdir(command);
char **args = Tokenize(command);
pid = fork();
if (pid == -1)
{
perror("Forking unsuccessful\n");
return 1;
}
if (pid == 0)
{
// Execute the specified program with its arguments
execvp(args[0], args);

// execvp() only returns if there is an error
perror("Error: ");
exit(1);
}
else
{
wait(&status);
}
}

free(command);

return (0);
}
