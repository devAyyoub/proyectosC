/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamjahed <aamjahed@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:33:46 by aamjahed          #+#    #+#             */
/*   Updated: 2023/07/06 15:43:49 by aamjahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	int	character;

	character = 'P';
	if (n < 0)
	{
		character = 'N';
	}
	write (1, &character, 1);
}
