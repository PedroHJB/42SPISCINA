/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 18:00:51 by pede-jes          #+#    #+#             */
/*   Updated: 2024/08/29 18:00:53 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strcat(char *dest, char *src);
int	main()
{
	char a[] = "ABRA-                ";

	char b[] = "CADABRA";

	printf("%s",ft_strcat(a,b));
}

char *ft_strcat(char *dest, char *src)
{unsigned int nb
unsigned int nb
	int i;
	int lenght;

	i = 0;
	lenght = 0;

	while(src[lenght] != '\0')
	{
		lenght++;
	}

	while(dest[i] != '\0')
	{
		dest[lenght-1] = src[i];
		i++;
		lenght++;
	}
	return dest;
}