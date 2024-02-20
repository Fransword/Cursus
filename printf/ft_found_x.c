/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:06:03 by francflo          #+#    #+#             */
/*   Updated: 2024/02/20 04:18:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_found_x(size_t x, int i)
{
	if (x == 0)
		i = ft_printf_write('0', i);
	else if (x >= 16)
	{
		i = ft_found_x(x / 16, i);
		i = ft_found_x(x % 16, i);
	}
	else
	{
		if (x <= 9)
			i = ft_printf_write(x + '0', i);
		else
			i = ft_printf_write(x + 'a' - 10, i);
	}
	return (i);
}
