/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visahaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 04:41:01 by visahaky          #+#    #+#             */
/*   Updated: 2024/09/25 04:45:36 by visahaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	index;

	index = 0;
	size = max - min;
	*range = malloc(size * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (*range == NULL)
	{
		return (-1);
	}
	while (index < size)
	{
		(*range)[index] = min + index;
		index++;
	}
	return (size);
}
/*
int main(void)
{
    int min = 6;
    int max = 9;
    int *array;
    int size = ft_ultimate_range(&array, min, max);
    int i = 0;
    if (size != -1)
    {
        while (i < size)
        { 
            printf("%d ", array[i]);
            i++;
        }
        printf("\n");
        free(array);
    } 
    else
    {
        printf("Error memory allocation.\n");
    }

    return (0);
}*/
