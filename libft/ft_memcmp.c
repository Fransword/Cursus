/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:01:52 by francflo          #+#    #+#             */
/*   Updated: 2024/01/29 15:09:57 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_memcmp(const void *s, const void *c, size_t n)
{
	const unsigned char	*z = s;
	const unsigned char	*u = c;

	if (n == 0)
	{
		if (*z < *u)
			return (-1);
		else if (*z > *u)
			return (1);
		else
			return (ft_memcmp(s + 1, s + 1, n - 1));
	}
	return (0);
}
