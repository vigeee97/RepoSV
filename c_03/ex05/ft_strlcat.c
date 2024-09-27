/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: visahaky <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 01:43:35 by visahaky          #+#    #+#             */
/*   Updated: 2024/09/22 02:14:55 by visahaky         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int size)
{
	unsigned int	dlen;
	unsigned int	slen;
	unsigned int	i;
	unsigned int	j;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (size <= dlen)
	{
		return (slen + size);
	}
	i = 0;
	j = dlen;
	while (src[i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}
/*
int	main(void) 
{
	char dest1[20] = "piscine";
	char dest2[20] = "piscine";
	char src[] = "42 ";

	unsigned int result1 = ft_strlcat(dest1, src, sizeof(dest1));
	printf("Result ft_strlcat: %u\n", result1);
	printf("Final dest: %s\n", dest1);
    
	unsigned int result2 = strlcat(dest2, src, sizeof(dest2));
	printf("Result strlcat: %u\n", result2);
	printf("Final dest: %s\n", dest2);

	return (0);
}*/
