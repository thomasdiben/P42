/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdi-bene <tdi-bene@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:44:56 by tdi-bene          #+#    #+#             */
/*   Updated: 2023/03/13 16:59:30 by tdi-bene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rec_sqr(int i, int nb)
{
	if (i * i == nb)
		return (i);
	if (i * i < nb)
		return (rec_sqr(i + 1, nb));
	return (0);
}

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	return (rec_sqr(1, nb));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n",ft_sqrt(4));
	printf("%d\n",ft_sqrt(1));
	printf("%d\n",ft_sqrt(3));
	printf("%d\n",ft_sqrt(144));
}
*/
