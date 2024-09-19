//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "Hello World";

	printf("Before: %s\n", str);
	printf("After: %s\n", ft_strupcase(str));
	return (0);
}*/
