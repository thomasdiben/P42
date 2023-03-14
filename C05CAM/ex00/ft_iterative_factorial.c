/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 18:23:45 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/13 19:26:00 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}
/*#include <stdio.h>
int	main(void)
{
	int nb = 7;
	nb = ft_iterative_factorial(nb);
	printf("%i\n", nb);
}*/
