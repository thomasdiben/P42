/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdi-bene <tdi-bene@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 12:01:04 by tdi-bene          #+#    #+#             */
/*   Updated: 2023/03/13 12:12:52 by tdi-bene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb <= 0)
		return (0);
	res = 1;
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_iterative_factorial(4));
	printf("%d\n",ft_iterative_factorial(0));
	printf("%d\n",ft_iterative_factorial(1));
	printf("%d\n",ft_iterative_factorial(3));
}
*/
