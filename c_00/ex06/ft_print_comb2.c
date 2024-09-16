#include <unistd.h>

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	c[5];

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			c[0] = '0' + (a / 10);
			c[1] = '0' + (a % 10);
			c[2] = ' ';
			c[3] = '0' + (b / 10);
			c[4] = '0' + (b % 10);
			write(1, c, 5);
			if (a != 98 || b != 99)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2 ();
	return (0);
}

