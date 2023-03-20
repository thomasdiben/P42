/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:05:14 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/15 11:41:24 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb * (ft_recursive_power(nb, power - 1)));
}
/*
#include <stdio.h>
int	main(void)
{
	int nb = 0;
	int power = 2;
	printf("%i\n", ft_recursive_power(nb, power));
}*/
