/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:05:34 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/18 21:29:34 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recurse(int nb, int i)
{
	if (i < 2)
		return (1);
	else if (nb % i != 0)
		return (ft_recurse(nb, i - 1));
	return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 0 || nb > 2147483647)
		return (0);
	else if (nb == 1 || nb == 0)
		return (2);
	else if (ft_recurse(nb, nb -1) == 1)
		return (nb);
	else if (ft_recurse(nb, nb -1) == 0)
		return (ft_find_next_prime(nb +1));
	return (0);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_find_next_prime(2));
}*/
