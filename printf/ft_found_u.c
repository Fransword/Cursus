/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:12:32 by francflo          #+#    #+#             */
/*   Updated: 2024/02/19 15:13:12 by francflo         ###   ########.fr       */
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
