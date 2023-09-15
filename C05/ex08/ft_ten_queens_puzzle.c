/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anchikri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 21:53:22 by anchikri          #+#    #+#             */
/*   Updated: 2023/09/11 16:21:02 by anchikri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_possible(int tab[10], int lig, int col)
{
	int	i;

	i = 0;
	while (i < lig)
	{
		if (tab[i] == col || (i - tab[i]) == (lig - col) || \
			(i + tab[i]) == (lig + col))
			return (0);
		i++;
	}
	return (1);
}

void	ft_display(int tab[10])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	ft_ten_queens_place(int tab[10], int lig, int *solutions)
{
	int	col;

	if (lig == 10)
	{
		*solutions += 1;
		ft_display(tab);
		return ;
	}
	col = 0;
	while (col < 10)
	{
		if (ft_possible(tab, lig, col))
		{
			tab[lig] = col;
			ft_ten_queens_place(tab, lig + 1, solutions);
		}
		col++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	tab[10];
	int	solutions;

	solutions = 0;
	i = 0;
	while (i < 10)
		tab[i++] = -1;
	ft_ten_queens_place(tab, 0, &solutions);
	return (solutions);
}
/*
int	main(void)
{
	printf("%d\n", ft_ten_queens_puzzle());
	return (0);
}*/
