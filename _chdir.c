#include "shell.h"

/**
 * _chdir - Change directory
 */

void _chdir(char *command)
{
/* check if command is cd */
if (strcmp(command, "cd ") == 0)
{
/* extract path from command*/
char *path = command + 3;
if (chdir(path) == -1)
{
perror("Error");
}
}
}