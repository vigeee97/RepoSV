/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visahaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 01:47:47 by visahaky          #+#    #+#             */
/*   Updated: 2024/09/24 01:50:05 by visahaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (result);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(4));
}*/
