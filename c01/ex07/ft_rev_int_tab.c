/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 14:37:24 by pede-jes          #+#    #+#             */
/*   Updated: 2024/08/28 13:36:43 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	buffer1;
	int	buffer2;
	int	cont;
	int	position;

	position = size - 1;
	buffer1 = 0;
	buffer2 = 0;
	cont = 0;
	while (cont < (size / 2))
	{
		buffer1 = tab[position];
		buffer2 = tab[cont];
		tab[cont] = tab[position];
		tab[position] = buffer2;
		cont++;
		position--;
	}
}
//int	main(void)
//{
//	int	a[7] = {1, 2, 3, 4, 5, 6, 7};
//	int	tamanho;
//	int	i;
//
//	tamanho = 7;
//	ptf("tamanho:%d\n", tamanho);
//	ft_rev_int_tab(a, tamanho);
//	i = 0;
//	while (i < 7)
//	{
//		ptf("final%d\n", a[i]);
//		i++;
//	}
//}
