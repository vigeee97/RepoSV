#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;

}

int	main(void)
{
	int x = 10;
	int y = -10;
	ft_swap(&x, &y);
	printf("x = %d and y = %d", x, y);
	return (0);
}
