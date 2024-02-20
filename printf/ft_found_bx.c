/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_bx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:24:18 by francflo          #+#    #+#             */
/*   Updated: 2024/02/20 04:18:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_found_bx(size_t bx, int i)
{
	if (bx == 0)
		i = ft_printf_write('0', i);
	else if (bx >= 16)
	{
		i = ft_found_bx(bx / 16, i);
		i = ft_found_bx(bx % 16, i);
	}
	else
	{
		if (bx <= 9)
			i = ft_printf_write(bx + '0', i);
		else
			i = ft_printf_write(bx + 'A' - 10, i);
	}
	return (i);
}