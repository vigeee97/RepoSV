/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visahaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 02:38:46 by visahaky          #+#    #+#             */
/*   Updated: 2024/09/24 02:41:11 by visahaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
int	main(void)
{
	printf("%i", ft_iterative_power(3, 4));
	return (0);
}*/
