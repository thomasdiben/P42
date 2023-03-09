/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 21:26:22 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/08 22:04:08 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	ft_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_islow(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (ft_alpha(str[0]) == 1)
		if (ft_islow(str[0]) == 1)
			str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (ft_alpha(str[i]) == 1)
		{
			if (ft_alpha(str[i - 1]) == 0 && ft_num(str[i - 1]) == 0)
				str[i] = str[i] - 32;
			else if (ft_islow(str[i]) == 0)
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
