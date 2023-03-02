#include "shell.h"

/**
 * Tokenize - Tokenize the command string to 
 * extract the program name and its arguments
 * @command: Command string
 * Return: Array of arguments
 */

char **Tokenize(char *command)
{
char **args = malloc(BUFFER_SIZE * sizeof(char *));
char *arg = strtok(command, " ");
int i = 0;

while (arg != NULL)
{
args[i++] = arg;
arg = strtok(NULL, " ");
}

return args;
}