/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbouvet <cbouvet@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 18:58:49 by cbouvet           #+#    #+#             */
/*   Updated: 2023/03/15 19:40:52 by cbouvet          ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if ((s1[i] > s2[i]) || (s1[i] < s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	long	i;
	char	*temp;

	i = 1;
	if (argc > 1)
	{
		while (i < (argc -1))
		{
			if (ft_strcmp(argv[i], argv[i +1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i +1];
				argv[i +1] = temp;
				i = 0;
			}
			i++;
		}
		i = 1;
		while (argv[i])
		{
			ft_print(argv[i]);
			i++;
		}
	}
}
