/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visahaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 04:04:04 by visahaky          #+#    #+#             */
/*   Updated: 2024/09/25 04:08:51 by visahaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	index;
	int	*buffer;

	index = 0;
	range = max - min;
	buffer = malloc(range * sizeof(int));
	if (min >= max)
		return (NULL);
	if (!buffer)
		return (NULL);
	while (index < range)
	{
		buffer[index] = min + index;
		index++;
	}
	return (buffer);
}
/*
int main(void)
{  
    int min = 4;
    int max = 8;
    int *range_array = ft_range(min, max);
    int i = 0;

    if (range_array == NULL)
    {
        printf("Memory allocation error.\n");
        return (1);
    }

    while (i < (max - min))
    {
		printf("%d ", range_array[i]);
		i++;
	}
	free(range_array);
	return (0);
}*/
