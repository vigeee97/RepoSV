/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visahaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 21:47:40 by visahaky          #+#    #+#             */
/*   Updated: 2024/09/22 02:16:57 by visahaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src [j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main()
{
    unsigned int a = 2;
	char src[] = "en";
	char dest[] = "Vig";
	printf("%s", ft_strncat(dest, src, a));
}*/
