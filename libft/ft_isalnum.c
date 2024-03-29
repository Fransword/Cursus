/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:06:56 by francflo          #+#    #+#             */
/*   Updated: 2023/11/29 16:07:04 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int num)
{
	if (num >= '0' && num <= '9')
		return (1);
	if ((num >= 'a' && num <= 'z') || (num >= 'A' && num <= 'Z'))
		return (1);
	else
		return (0);
}
/*para ver si es un numero o
una letra*/