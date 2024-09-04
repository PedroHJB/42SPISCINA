/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:13:49 by pede-jes          #+#    #+#             */
/*   Updated: 2024/08/21 11:21:03 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (a > 0 || b > 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	else
	{
		return ;
	}
}
// void	ft_div_mod(int a, int b, int *div, int *mod);
/*int	main(void)
{

	int a = 6;

	int b = 3;

	int c;

	int d;

	printf("%d--%d\n",a,b);

	ft_div_mod( a, b, &c, &d);
}*/
