int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 32) && (str[i] <= 126))
			i++;
		else
			return (0);
	}
	return (1);
}

#include <stdio.h>

int	main()
{
	char a[] = "HelloWorld";
	printf("%s is printable: %d\n", a, ft_str_is_printable(a));
}
