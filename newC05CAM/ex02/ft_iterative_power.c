/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:35:22 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/15 12:29:26 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	long	result;
	long	i;

	i = 0;
	result = 1;
	if (power == 0)
		return (1);
	if ((power < 0) || (nb == 0))
		return (0);
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>
int	main(void)
{
	int nb = 5;
	int power = 3;
	printf("%i\n", ft_iterative_power(nb, power));
}*/
