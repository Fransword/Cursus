/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:20:48 by francflo          #+#    #+#             */
/*   Updated: 2023/12/01 13:22:20 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_tolower(int letra)
{
	while (letra >= 65 && letra <= 90)
	{
		letra = letra - (65 - 97);
	}
	return (letra);
}
