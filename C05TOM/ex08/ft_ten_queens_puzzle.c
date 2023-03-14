/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdi-bene <tdi-bene@student.42.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 10:25:17 by tdi-bene          #+#    #+#             */
/*   Updated: 2023/03/14 16:40:41 by tdi-bene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	initialize_tab(int (*tab)[10])
{
	int	j;
	int	i;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	next_available_spot(int col, int (*tab)[10])
{
	int	i;

	i = 0;
	while (tab[i][col])
		i++;
	if (i > 9)
		return (-1);
	return (i);
}

void	update_territory(int col, int row, int (*tab)[10], int build)
{
	int	i;
	
	i = 0;
	while(i <= 9)
	{
		tab[i][col] += build;
		if (i != col)
			tab[row][i] += build;
		if (i && row + i <= 9 && col + i <= 9)
			tab[row + i][col + i] += build;
		if (i && row - i >= 0 && col - i >= 0)
			tab[row - 1][col - i] += build;
		if (i && row + i <= 9 && col - i >= 0)
			tab[row + i][col - i] += build;
		if (i && row - i >= 0 && col + i <= 9)
			tab[row - i][col + i] += build;
		i++;
	}
}

void	print_tab(int (*tab)[10])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			printf("%d ", tab[i][j]);
			if (j == 9)
				printf("\n");
			j++;
		}
		i++;
	}
}

int	place_queen(int col, int (*tab)[10])
{
	int	row;
	
	if (col > 9)
		return (0);
	row = next_available_spot(col, tab);
	printf("on col [%d], row available:%d\n",col, row);
	if (row < 0)
		return (0);
	//print_tab(tab);
	update_territory(col, row, tab, 1);
	return (place_queen(col + 1, tab));
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10][10];

	initialize_tab(tab);
	return (place_queen(0, tab));
}

int	main(void)
{
	ft_ten_queens_puzzle();
	return (0);
}
