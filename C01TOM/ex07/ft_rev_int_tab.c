/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdi-bene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:39:50 by tdi-bene          #+#    #+#             */
/*   Updated: 2023/03/07 11:09:36 by tdi-bene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	cache;

	cache = *a;
	*a = *b;
	*b = cache;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;

	i = 1;
	while (i <= size / 2)
	{
		ft_swap(&tab[i - 1], &tab[size - i]);
		i++;
	}
}
