/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdi-bene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 17:56:09 by tdi-bene          #+#    #+#             */
/*   Updated: 2023/03/08 10:43:27 by tdi-bene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*get_converter(char *converter)
{
	int		i;

	i = 0;
	while (i < 16)
	{
		if (i <= 9)
			converter[i] = i + '0';
		else
			converter[i] = i - 10 + 'a';
		i++;
	}
	return (converter);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		hex1;
	int		hex2;
	char	converter[16];

	get_converter(converter);
	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			hex1 = str[i] / 16;
			hex2 = str[i] % 16;
			write(1, "\\", 1);
			write(1, &converter[hex1], 1);
			write(1, &converter[hex2], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
