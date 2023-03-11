/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdi-bene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:17:45 by tdi-bene          #+#    #+#             */
/*   Updated: 2023/03/10 11:00:54 by tdi-bene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	if (size == 0)
		return (dest);
	i = 0;
	while (dest[i])
		i++;
	if (i >= size)
		return i;
	j = 0;
	while (src[j] && j + i <= size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest [i + j] = 0;
	while (src[j])
		j++;
	return (j + i);
}
