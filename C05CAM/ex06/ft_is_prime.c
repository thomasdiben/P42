/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:36:02 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/14 16:01:05 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_decrease(int nb, int d)
{
	if (d == 1)
		return (1);
	else if (nb % d > 0)
		return (ft_decrease(nb, d -1));
	return (0);
}

int	ft_is_prime(int nb)
{
	if ((nb < 1) || (nb > 2147483647))
		return (0);
	else
		return (ft_decrease(nb, nb -1));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_is_prime(17));
}*/
