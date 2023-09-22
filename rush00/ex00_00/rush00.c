/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamjahed <aamjahed@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:04:07 by aamjahed          #+#    #+#             */
/*   Updated: 2023/07/09 12:04:11 by aamjahed         ###   ########.fr       */
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
		c = 'o';
	else if (i == 0 && j == x - 1)
		c = 'o';
	else if (i == y - 1 && j == 0)
		c = 'o';
	else if (i == y - 1 && j == x - 1)
		c = 'o';
	else if (i == 0)
		c = '-';
	else if (j == x - 1)
		c = '|';
	else if (j == 0)
		c = '|';
	else if (i == y - 1)
		c = '-';
	else
		c = ' ';
	ft_putchar(c);
}
