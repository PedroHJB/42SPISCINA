/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 03:41:01 by pede-jes          #+#    #+#             */
/*   Updated: 2024/09/04 03:41:03 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);
int	main()
{
	char a[] = "ABRA-                ";

	char b[] = "CADABRA";

	printf("%s",ft_strncat(a,b,3));
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i;
	int lenght;

	i = 0;
	lenght = 0;

	while(dest[lenght] != '\0')
	{
		lenght++;
	}

	while(src[i]!= '\0'|| lenght< nb)
	{
		dest[lenght-1] = src[i];
		i++;
		lenght++;
	}
	return dest;
}