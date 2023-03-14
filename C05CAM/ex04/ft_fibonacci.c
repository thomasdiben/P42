/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:28:31 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/14 10:47:34 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}
/*
#include <stdio.h>
int main(void)
{
	int index = 14;
	printf("%i\n", ft_fibonacci(index));
}*/
