/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:06:18 by francflo          #+#    #+#             */
/*   Updated: 2023/11/29 16:07:33 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*z;

	z = s;
	while (n-- > 0)
		*z++ = 0;
}
/*sirve para poner a cero
los primeros n
bytes del área
de bytes que comienza en s.
*/