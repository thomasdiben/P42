/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:03:17 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/10 11:22:23 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10 && nb >= 0)
	{
		ft_putchar(nb + 48);
	}
	else if (nb > 10 && nb <= 2147483647)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
	else if (nb < 0 && nb >= -2147483648)
	{
		nb = nb * -1;
		ft_putchar('-');
		ft_putnbr(nb);
	}
}	
