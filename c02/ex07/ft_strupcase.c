/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupvase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:48:57 by pede-jes          #+#    #+#             */
/*   Updated: 2024/09/03 19:49:58 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
//  #include <stdio.h>

//  char	*ft_strupcase(char *str);

//  int	main(void)
//  {
//  	char	a[4] = "Aaaa";

//  	printf("%s",ft_strupcase(a));
//  }
