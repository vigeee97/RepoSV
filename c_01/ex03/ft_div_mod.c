#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}

int main(void)
{
	int a = 11, b = 4;
	int div, mod;

	ft_div_mod(a, b, &div, &mod);
	printf("Div = %d and mod = %d", div, mod);
	return (0);
}
