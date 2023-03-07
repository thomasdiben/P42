/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdi-bene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 11:10:15 by tdi-bene          #+#    #+#             */
/*   Updated: 2023/03/07 12:04:12 by tdi-bene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	cache;

	cache = *a;
	*a = *b;
	*b = cache;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swapped;

	if (size <= 0)
		return ;
	swapped = 1;
	while (swapped)
	{
		i = 0;
		swapped = 0;
		while (i <= size - 2)
		{
			if (tab[i] > tab [i + 1])
			{
				ft_swap(&tab[i], &tab[i + 1]);
				swapped = 1;
			}
			i++;
		}
	}
}
