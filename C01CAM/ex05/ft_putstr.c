/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 19:39:04 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/06 21:16:00 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_pustr(char *str)
{
	int	arr_size;

	arr_size = (sizeof(*str / sizeof(str[0])) - 1);
	printf("%i\n", arr_size);
	write(1, str, arr_size);
}
