/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_parser.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdi-bene <tdi-bene@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:02:12 by tdi-bene          #+#    #+#             */
/*   Updated: 2023/03/20 22:51:11 by tdi-bene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include <fcntl.h>

int	read_file(int fd)
{
	int	counter;
	int	nb_lines, nb_lines_check;
	int	nb_col, nb_col_check;
	char	c;
	char 	infos[3];

	counter = 0;
	nb_col = 0;
	nb_lines_check = 0;
	nb_col_check = 0;
	while (read(fd, &c, 1))
	{
		counter++;
		if (counter == 1)
			nb_lines = c - '0';
		if (counter <= 4 && counter >= 2)
			infos[counter - 2] = c;
		if (counter == 5 && c != '\n')
			return (-1);
		if (counter > 5 && c == '\n')
		{
			nb_lines_check++;
			if (!nb_col)
				nb_col = counter - 5 - 1;
			else
				if (counter == 5 + nb_lines_check * nb_col + nb_lines_check)
					return (-1);
		}
		printf("%c", c);
	}

	printf("nb cols:%d\nnb lines check:%d\n", nb_col, nb_lines_check);
	return (1);
}

void	parse_file(int argc, char **argv)
{
	int	i;
	int	fd;

	if (argc <= 1)
		//TODO: implement when argc == 1 / read from standard input (0 / SRDIN_FILENO)
		return ;
	i = 1;
	while (i <= argc - 1)
	{
		fd = open(argv[i], O_RDONLY);
		read_file(fd);
		i++;
	}
}

int	main(int argc, char **argv)
{
	parse_file(argc, argv);
}
