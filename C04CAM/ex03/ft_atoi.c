/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:23:08 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/13 12:12:19 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_minus(char c)
{
	if (c == '-')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	n;
	int	multip;

	i = 0;
	n = 0;
	multip = 1;
	while (str[i++])
	{
		if (ft_minus(str[i]))
		{
			while (ft_minus(str[i]))
			{
				multip = multip * (-1);
				i++;
			}
		}
		else if (ft_num(str[i]))
		{
			while (ft_num(str[i]))
				n = (n * 10) + (str[i++] - 48);
			break ;
		}
	}
	return (n * multip);
}
#include <stdio.h>
int	main(void)
{
	char str[]="    ---+--+1234ab567";
	int result = ft_atoi(str);
	printf("%i\n", result);
}
