/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srudman <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:23:02 by srudman           #+#    #+#             */
/*   Updated: 2023/03/08 14:52:50 by srudman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_lowercase(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start;

	i = 0;
	start = 0;
	if (is_lowercase(str[i]))
		str[i] = str[i] - 32;
		i++;
	while (str[i] != '\0')
	{
		if (is_lowercase(str[i]) && start)
			str[i] = str[i] - 32;
		else if (is_uppercase(str[i]) && !start)
			str[i] = str[i] + 32;
		if (is_uppercase(str[i]) || is_lowercase(str[i]) || is_number(str[i]))
			start = 0;
		else
			start = 1;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] = "gOd, THis exerciCE=took 05suCH a LoNG ?t1me";
	ft_strcapitalize(str);
	printf("%s\n", str);
	return 0;
}
*/
