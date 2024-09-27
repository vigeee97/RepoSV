/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visahaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 01:31:00 by visahaky          #+#    #+#             */
/*   Updated: 2024/09/23 01:33:57 by visahaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[] = "42";
	char str2[] = "42";
	printf("ft_strlen: %d\n", ft_strlen(str1));
	printf("strlen: %lu\n", strlen(str2));
	return (0);
}*/
