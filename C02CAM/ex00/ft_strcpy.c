/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 15:43:50 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/08 10:04:51 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	if (dest == NULL)
		return ('\0');
	while (*src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
