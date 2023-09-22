/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamjahed <aamjahed@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:11:41 by aamjahed          #+#    #+#             */
/*   Updated: 2023/07/10 13:57:56 by aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	dividend;
	int	divisor;

	dividend = *a;
	divisor = *b;
	*a = dividend / divisor;
	*b = dividend % divisor;
}
