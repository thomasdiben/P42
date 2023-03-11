/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdi-bene <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:17:45 by tdi-bene          #+#    #+#             */
/*   Updated: 2023/03/11 17:16:35 by tdi-bene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (size == 0)
		return (0);
	i = 0;
	while (dest[i])
		i++;
	if (i >= size)
		return (size);
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
