/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdi-bene <tdi-bene@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:51:52 by tdi-bene          #+#    #+#             */
/*   Updated: 2023/03/13 16:01:10 by tdi-bene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (!nb)
		return (0);
	while (power >= 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_iterative_power(0,0));
	printf("%d\n",ft_iterative_power(0,12));
	printf("%d\n",ft_iterative_power(1,5));
	printf("%d\n",ft_iterative_power(1232,0));
	printf("%d\n",ft_iterative_power(4,2));
	printf("%d\n",ft_iterative_power(2,4));
	printf("%d\n",ft_iterative_power(5,3));
}
*/
