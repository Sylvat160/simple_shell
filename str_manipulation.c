#include "shell.h"

/**
 * strlen - returns the length of a string
 * @s: the string to be measured
 * Return: the length of the string
 */

int _strlen(char *s)
{
int i = 0;
if (!s)
{
return (0);
}
while (*s++)
{
i++;
}
return (i);
}

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 * Return: 0 if the strings are equal,
 * negative if s1 < s2, positive if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
if (*s1 == *s2)
{
return (0);
}
else
{
return (*s1 < *s2 ? -1 : 1);
}
}
}

/**
 * starts_with - checks if a string
 * starts with a haystack
 * @haystack: the string to be checked
 * @needle: the string to be checked against
 * Return: the addres of the next haystack or NULL
 */

char *starts_with(const char *haystack, const char *needle)
{
while (*needle)
{
if (*haystack++ != *needle++)
{
return (NULL);
}
return ((char *)haystack);
}
}

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: the address of the destination string
 */

char *_strcat(char *dest, char *src)
{
char *tmp = dest;
while (dest)
{
dest++;
}
while (*src)
{
*dest++ = *src++;
}
*dest = *src;
return (tmp);
}

/**
 * is_delim - checks if a character is a delimiter
 * @c: the character to be checked
 * @delim: the delimiter to be checked against
 * Return: 1 if the character is a delimiter, 0 otherwise
 */

int is_delim(char c, char *delim)
{
while (*delim)
{
if (*delim++ == c)
{
return (1);
}
}
return (0);
}
