/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:49:17 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/20 14:04:20 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_increment(int nb, int i)
{
	if (((i * i) > nb) || ((i * i) > 46340))
		return (0);
	else if ((i * i) == nb)
		return (i);
	else if ((i * i) < nb)
		return (ft_increment(nb, (i +1)));
	return (0);
}

int	ft_sqrt(int nb)
{
	if (nb <= 0 || nb > 2147473647)
		return (0);
	if (nb == 1)
		return (1);
	else
		return (ft_increment(nb, 0));
}
/*
#include <stdio.h>
int	main(void)
{
	int nb = 25;
	printf("%i\n", ft_sqrt(nb));
}*/
