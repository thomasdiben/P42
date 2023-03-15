/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdi-bene <tdi-bene@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:18:21 by tdi-bene          #+#    #+#             */
/*   Updated: 2023/03/14 10:24:36 by tdi-bene         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_find_next_prime(2));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(7));
	printf("%d\n", ft_find_next_prime(14));
	printf("%d\n", ft_find_next_prime(51));

}
*/
