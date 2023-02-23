#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
    size_t size = 10;
    char *buf = malloc(sizeof(char) * size);
    while (1)
    {
        printf("$ ");
        getline(&buf, &size, stdin);

        printf("buf: %s", buf);
    }
    free(buf);

    return 0;
}
