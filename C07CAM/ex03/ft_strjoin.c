/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 13:42:02 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/21 16:36:51 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new;
	long	i;
	long	j;
	long	k;

	i = 0;
	k = 0;
	if (size == 0)
		return (NULL);
	new = malloc(sizeof (char) * (size + (ft_strlen(sep) * size) + 1));
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			new[k++] = strs[i][j++];
		j = 0;
		if (ft_strlen(sep) >= 1)
		{
			while (sep[j])
				new[k++] = sep[j++];
			i++;
		}
	}
	new[k] = '\0';
	return (new);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*strs[]={"Hello", "grosse", "tchoin", NULL};
	char *sep = "! ";
	char *new = ft_strjoin(3, strs, sep);
	printf("%s\n", new);
}*/
