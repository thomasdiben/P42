/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdi-bene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:03:26 by tdi-bene          #+#    #+#             */
/*   Updated: 2023/03/07 15:48:21 by tdi-bene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_lcc(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	is_specialc(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (0);
	if (c >= '0' && c <= '9')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (is_lcc(str[0]))
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		if (is_lcc(str[i]) && is_specialc(str[i - 1]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
