#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i = 0;

    while (i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

int main(void)
{
    char dest[10];
    char src[] = "Hello";
    int a = 4;

    // Initialize the dest array with null terminators
    memset(dest, '\0', sizeof(dest));

    ft_strncpy(dest, src, a);

    printf("Dest: %.4s\n", dest);

    return 0;
}
