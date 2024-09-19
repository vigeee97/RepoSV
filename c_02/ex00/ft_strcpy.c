//#include <stdio.h>
char	*ft_strcpy(char	*dest, char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void);
{
	char dest[10];
	char src[] = "Hello";
	ft_strcpy(dest, src);
	printf("After: %s\n", dest);
	return (0);
}*/
