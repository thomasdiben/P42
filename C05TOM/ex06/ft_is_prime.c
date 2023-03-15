/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdi-bene <tdi-bene@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:43:08 by tdi-bene          #+#    #+#             */
/*   Updated: 2023/03/14 10:17:15 by tdi-bene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	prime_tester(int nb, int test)
{
	if (nb <= 1)
		return (0);
	if (test == 1)
		return (1);
	if (nb % test)
		return (prime_tester(nb, test - 1));
	return (0);
}

int	ft_is_prime(int nb)
{
	return (prime_tester(nb, nb - 1));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d",ft_is_prime(2));
	printf("%d",ft_is_prime(0));
	printf("%d",ft_is_prime(1));
	printf("%d",ft_is_prime(27));
	printf("%d",ft_is_prime(48));
	printf("%d",ft_is_prime(13));
}
*/
