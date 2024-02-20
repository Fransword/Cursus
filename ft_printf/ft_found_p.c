/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:29:46 by francflo          #+#    #+#             */
/*   Updated: 2024/02/19 15:51:05 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_found_p(size_t p, int i)
{
	if (p)
	{
		i = ft_found_c('0', i);
		i = ft_found_c('x', i);
		i = ft_found_bx(p, i);
	}
	else
		i = ft_found_s("(null)", i);
	return (i);
}
