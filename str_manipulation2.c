#include "shell.h"

/**
 * _strcopy - copies a string
 * @dest: the destination string
 * @src: the source string
 * Return: the address of the destination string
 */

char *_strcopy(char *dest, char *src)
{
int i = 0;
if (dest == src || src == 0)
{
return (dest);
}
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}

/**
 * _strdup - duplicates a string
 * @str: the string to be duplicated
 * Return: the address of the duplicated string
 */

char *_strdup(const char *str)
{
int len = 0;
char *dup;
if (str == NULL)
{
return (NULL);
}
while (*str++)
{
len++;
}
dup = malloc(sizeof(char) * (len + 1));
if (!dup)
{
return (NULL);
}

for (len++; len--)
{
dup[len] = *--str;
}
return (dup);
}

/**
 * _puts - prints an input string
 * @str: the string to be printed
 *
 * Return: Nothing
 */

void _puts(char *str)
{
int i = 0;
if (!str)
{
return;
}
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
static int i;
static char buf[WRITE_BUF_SIZE];
if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
{
write(1, buf, i);
i = 0;
}
if (c != BUF_FLUSH)
{
buf[i++] = c;
}
return (1);
}

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to input
 * Return: 1 if c is alphabetic, 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}