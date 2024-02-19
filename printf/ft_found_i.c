/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:22:51 by francflo          #+#    #+#             */
/*   Updated: 2024/02/19 15:23:19 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_found_i(int y, int i)
{
	if (y == -2147483648)
	{
		write(1, "-2147483648", 11);
		i = i + 11;
	}
	else if (y < 0)
	{
		i = ft_printf_write('-', i);
		i = ft_found_i(-y, i);
	}
	else if (y >= 0 && y < 10)
		i = ft_printf_write(y + '0', i);
	else
	{
		i = ft_found_i(y / 10, i);
		i = ft_printf_write(y % 10 + '0', i);
	}
	return (i);
}
