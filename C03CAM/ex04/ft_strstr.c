/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:34:40 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/11 19:15:52 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i])
	{
		if (to_find[j] == str[i])
		{
			k = i;
			while (to_find[j] && to_find[j] == str[i])
			{
				i++;
				j++;
			}
			if (to_find[j] == 0)
				return (&str[k]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s1[]="I'm looking for potato";
	char s2[]="pota";
	char *result = strstr(s1, s2);
	printf("%s\n", result);
	char *mine = ft_strstr(s1, s2);
	printf("%s\n", mine);
}*/
