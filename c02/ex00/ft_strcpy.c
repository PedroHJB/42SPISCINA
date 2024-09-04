/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 10:55:01 by pede-jes          #+#    #+#             */
/*   Updated: 2024/09/03 18:07:22 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*#include <sio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	a[6] = "amargo";
	char	b[6] = "";

	ptf("COMEÇO %s\n", a);
	ft_strcpy(b, a);
	ptf("FINAL %s", b);
}
*/
