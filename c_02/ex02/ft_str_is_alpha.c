#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	while (*str != 0)
	{
		if (*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int main()
{
	char str1[] = "abc";
	char str2[] = "ab1";
	printf("%d\n", ft_str_is_alpha(str1));
	printf("%d\n", ft_str_is_alpha(str2));
	return (0);
}
