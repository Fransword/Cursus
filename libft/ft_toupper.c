/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 13:17:35 by francflo          #+#    #+#             */
/*   Updated: 2023/12/01 13:20:38 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	ft_toupper( char letra)
{
	while (letra >= 'a' && letra <= 'z')
	{
		letra = letra - ('a' - 'A');
	}
	return (letra);
}
