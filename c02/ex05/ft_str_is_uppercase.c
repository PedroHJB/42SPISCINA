/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:46:43 by pede-jes          #+#    #+#             */
/*   Updated: 2024/08/27 11:48:47 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	cont;

	cont = 0;
	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 65 || str[i] > 90)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// #include <stdio.h>

// int	ft_str_is_uppercase(char *str);

// int	main(void)
// {
// 	char	a[] = "NBHJBJHVJHVBHJAAA";

// 	ft_str_is_uppercase(a);
// }
