/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:58:00 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/21 15:12:41 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*p;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	p = malloc(sizeof(int) * (max - min));
	i = 0;
	if (p == NULL)
		return (-1);
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	*range = p;
	return (i);
}
/*
#include <stdio.h>
int	main(void)
{
	int min = 1;
	int max = 6;
	int ran = 1;
	int i = 0;
	int *range = &ran;
	printf("%i\n", ft_ultimate_range(&range, min, max));
	while (i<max-min)
	{
		printf(" %i", range[i]);
		i++;
	}
}*/
