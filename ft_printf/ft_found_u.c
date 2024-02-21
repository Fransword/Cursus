/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:06:03 by francflo          #+#    #+#             */
/*   Updated: 2024/02/21 13:26:39 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_found_u(unsigned int u, int i)
{
	if (u < 0)
	{
		i = ft_printf_write('-', i);
		i = ft_found_u(-u, i);
	}
	else if (u >= 0 && u < 10)
		i = ft_printf_write(u + '0', i);
	else
	{
		i = ft_found_u(u / 10, i);
		i = ft_printf_write(u % 10 + '0', i);
	}
	return (i);
}
