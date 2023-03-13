/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 17:59:46 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/09 18:32:40 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	n;
	unsigned int	i;

	n = 0;
	i = 0;
	while (dest[i])
		i++;
	while (n < nb)
	{
		dest[i++] = src[n++];
	}
	dest[i] = 0;
	return (dest);
}
