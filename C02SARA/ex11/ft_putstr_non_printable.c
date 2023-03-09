/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srudman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 18:33:02 by srudman           #+#    #+#             */
/*   Updated: 2023/03/09 11:17:43 by srudman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	else
		return (0);
}

char	second_hex_part(char c)
{
	char	x;

	x = 0;
	if (c % 16 == 10)
		x = 'a';
	else if (c % 16 == 11)
		x = 'b';
	else if (c % 16 == 12)
		x = 'c';
	else if (c % 16 == 13)
		x = 'd';
	else if (c % 16 == 14)
		x = 'e';
	else if (c % 16 == 15)
		x = 'f';
	else
		x = c % 16 + '0';
	return (x);
}

void	ft_putstr_non_printable(char *str)
{
	char	h;
	char	x;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_printable(str[i]))
		{
			write(1, "\\", 1);
			h = str[i] / 16 + '0';
			x = second_hex_part(str[i]);
			write(1, &h, 1);
			write(1, &x, 1);
		}
		else
			write (1, &str[i], 1);
		i++;
	}
}

/*
int	main(void)
{
	char str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}
*/
