/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visahaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 03:53:33 by visahaky          #+#    #+#             */
/*   Updated: 2024/09/24 03:56:27 by visahaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

int	main(void)
{
	printf("%d\n", ft_find_next_prime(10));
	return (0);
}*/
