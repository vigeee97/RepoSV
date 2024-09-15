#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

int main(void)
{
	int a = 12, b = 4;

	ft_ultimate_div_mod(&a, &b);
	printf("Div = %d and mod = %d", a, b);
	return (0);
}
