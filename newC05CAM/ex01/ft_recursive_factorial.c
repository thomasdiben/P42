/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 19:27:08 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/15 11:10:08 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	return (nb * (ft_recursive_factorial(nb -1)));
}
/*
#include <stdio.h>
int	main(void)
{
	int n = 4;
	printf("%i\n", ft_recursive_factorial(n));
}*/
