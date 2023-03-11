/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdi-bene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:05:14 by tdi-bene          #+#    #+#             */
/*   Updated: 2023/03/09 18:14:06 by tdi-bene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	k;

	if (!to_find[0])
		return (NULL);
	i = 0;
	while (str[i])
	{
		k = 0;
		while (str[i + k] == to_find[k])
		{
			k++;
			if (!to_find[k])
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%s",ft_strstr("iy","iy"));
}
*/
