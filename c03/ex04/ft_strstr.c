/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 10:33:17 by pede-jes          #+#    #+#             */
/*   Updated: 2024/09/04 10:33:21 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	tamanho;
	int	i;

	tamanho = 0;
	while (to_find[tamanho])
		tamanho++;
	if (!tamanho)
		return (str);
	i = 0;
	while (*str)
	{
		if (*str == to_find[i])
		{
			i++;
		}
		else if (i > 0)
			i = 0;
		if (i == tamanho)
			return (str - --i);
		str++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char a[] = "ADSANHA";
	char b[] = "N";

	printf("%s\n", strstr(a, b));
	printf("%s\n", ft_strstr(a, b));
}