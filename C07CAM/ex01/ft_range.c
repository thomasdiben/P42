/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 17:15:09 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/21 15:08:42 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*p;
	int	i;

	i = 0;
	p = malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		p = NULL;
		return (p);
	}
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}
/*
#include <stdio.h>
int	main(void)
{
	int min = 15;
	int max = 20;
	int *p = ft_range(min, max);
	int i = 0;
	while (i < (max - min))
	{
		printf("%i ", p[i]);
		i++;
	}
	printf("\n");
}*/
