/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 18:36:31 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/11 21:20:11 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	total;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (dest[j])
		j++;
	total = i + j;
	if (total > size)
		return (j);
	else
	{
		i = 0;
		while (dest[j] < size)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = 0;
		return (total);
	}
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[]="world!t";
	char s2[20]="hello ";
	unsigned int totalmine = ft_strlcat(s2, s1, 20);
	printf("mine: %i\n", totalmine);
	printf("%s", s2);
}*/
