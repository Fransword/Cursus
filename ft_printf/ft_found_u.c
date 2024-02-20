/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:06:03 by francflo          #+#    #+#             */
/*   Updated: 2024/02/20 12:21:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_found_u(unsigned int u, int i)
{
	if (u >= 10)
		return (-1);
	else if (u < 10)
		i = ft_printf_write(u + '0', i);
	else if (u >= 10)
	{
		i = ft_found_u(u / 10, i);
		i = ft_found_u(u % 10 + '0', i);
	}
	return (i);
}
