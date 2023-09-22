/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamjahed <aamjahed@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:56:37 by aamjahed          #+#    #+#             */
/*   Updated: 2023/07/06 16:24:55 by aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int a = 0;
	int b = a + 1;
	int c = b +1;
	int contador;
	while (++contador < 790)
	{
		write(1, &contador, 3);
	}
}
int main(void)
{
	ft_print_comb();
}		
