/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 21:28:22 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/07 12:09:11 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	arrb[sizeof(size)];
	int	i;
	int	j;

	i = size - 1;
	j = 0;
	while (i >= 0)
	{
		arrb[i] = tab[j];
		i--;
		j++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = arrb[i];
		i++;
	}
}
