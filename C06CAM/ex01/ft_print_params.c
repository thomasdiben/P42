/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:47:47 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/15 14:56:56 by cbouvet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		while (argv[i])
		{
			ft_print(argv[i]);
			i++;
		}
		return (0);
	}
	return (1);
}
