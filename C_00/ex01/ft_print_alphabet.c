#include<unistd.h>

void ft_putchar(char c)
	{
		write(1,&c,1);
	}
void ft_print_alphabet(void)
	{
		int	i;
		i=97;
		while (i<=122)
			{
				ft_putchar(i);
					i++;
			}
	}

int main()
	{
		ft_print_alphabet();
		ft_putchar('\n');
		return 0;
	}
