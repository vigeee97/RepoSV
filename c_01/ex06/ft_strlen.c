#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i=0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

int main(void)
{
	char string[100];
	int length;
	printf("Type a string: ");
	scanf("%s", string);
	length = ft_strlen(string);
	printf("The length is %d.\n", length);
	return(0);	
}
