/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:03:59 by pede-jes          #+#    #+#             */
/*   Updated: 2024/08/21 14:27:04 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	buffer1;
	int	buffer2;

	buffer1 = *a / *b;
	buffer2 = *a % *b;
	*a = buffer1;
	*b = buffer2;
}
// void	ft_ultimate_div_mod(int *a, int*b);
/*int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 54;
	printf("%d\n%d\n",a,b);
	ft_ultimate_div_mod(&a,&b);
}
*/
