/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pede-jes <pede-jes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 22:55:04 by pede-jes          #+#    #+#             */
/*   Updated: 2024/09/02 22:59:26 by pede-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	cont;
	int	fc;
	int	buffer;

	cont = 0;
	fc = 0;
	while (cont < size)
	{
		if (tab[fc] > tab[fc + 1])
		{
			buffer = tab[fc];
			tab[fc] = tab[fc + 1];
			tab[fc + 1] = buffer;
			cont = 0;
			fc = 0;
		}
		else
		{
			fc++;
		}
		cont++;
	}
}
int	main(void)
  {
  	int a[10] = {1,3,2,0,4,6,8,7,10,9};
  
  	int tamanho;
  
  	tamanho = 10;
  
  		ptf("tamanho:%d\n",tamanho);
  
  	int i = 0;
  
  	while(i<10)
  		{
  		ptf("começo%d\n",a[i]);
  		i++;
  		}
  
  
  	ft_sort_int_tab(a,tamanho);
  
  		i = 0;
  
  	while(i<10)
  		{
  		ptf("final%d\n",a[i]);
  		i++;
  		}
  }
