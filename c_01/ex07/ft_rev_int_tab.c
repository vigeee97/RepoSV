#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int buf;
	int i;

	i = 0;

	while(i < (size / 2))
	{
		buf = tab[i];
		tab[i] = tab [size - i - 1];
		tab [size - i - 1] = buf;
		i++;
	}
}

int main()
{
	int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int size;
	size = 10;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab [4], tab[5], tab[6], tab[7], tab[8], tab[9]);
	return (0);
}
