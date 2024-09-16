#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int buf;

	while (size >= 0)
	{
		i = 0;
		while (i < size -1)
		{
			if(tab[i] > tab[i + 1])
			{
				buf = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = buf;
			}
			i++;
		}
		size--;
	}
}

int main()
{
	int size;
	int tab[6] = {7,2,10,4,5,6};

	size = 6;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d\n",tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]);
	return (0);
}
