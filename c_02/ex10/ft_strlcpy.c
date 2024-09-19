//#include <stdio.h>

unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int i;

    i = 0;
    if (size == 0)
    {
        while (src[i])
        {
            i++;
        }
        return i;
    }
    
    while (i < size - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    
    while (src[i])
    {
        i++;
    }
    
    return i;
}
/*
int main(void)
{
    char dest[20];
    const char src[] = "Hello World!";
    unsigned int size = sizeof(dest);

    unsigned int length = ft_strlcpy(dest, src, size);
    printf("Our copied text: %s has %u length.\n", dest, length);
    return (0);
}*/
