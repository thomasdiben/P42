/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdi-bene <tdi-bene@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:01:32 by tdi-bene          #+#    #+#             */
/*   Updated: 2023/03/14 09:37:59 by tdi-bene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (ft_recursive_power(nb, power + 1) / nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_recursive_power(-5,3));
	printf("%d\n",ft_recursive_power(0,0));
	printf("%d\n",ft_recursive_power(12,2));
	printf("%d\n",ft_recursive_power(0,4));
	printf("%d\n",ft_recursive_power(12315,0));
	printf("%d\n",ft_recursive_power(2,4));
	printf("\n");
	printf("%d\n",ft_recursive_power(2,-2));
	printf("%d\n",ft_recursive_power(2,-4));
	printf("%d\n",ft_recursive_power(10,-3));
}
*/
