/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamjahed <aamjahed@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:09:16 by aamjahed          #+#    #+#             */
/*   Updated: 2023/07/09 12:09:20 by aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	rush(int x, int y);
void	paintchar(int i, int j, int x, int y);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			paintchar(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	paintchar(int i, int j, int x, int y)
{
	char	c;

	if (i == 0 && j == 0)
		c = 'A';
	else if (i == 0 && j == x - 1)
		c = 'C';
	else if (i == y - 1 && j == 0)
		c = 'C';
	else if (i == y - 1 && j == x - 1)
		c = 'A';
	else if (i == 0)
		c = 'B';
	else if (j == x - 1)
		c = 'B';
	else if (j == 0)
		c = 'B';
	else if (i == y - 1)
		c = 'B';
	else
		c = ' ';
	ft_putchar(c);
}
