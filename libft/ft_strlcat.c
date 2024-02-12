/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:32:41 by francflo          #+#    #+#             */
/*   Updated: 2024/02/05 14:22:51 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	ldst;
	size_t	lsrc;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	ldst = i;
	lsrc = (size_t)ft_strlen(src);
	if ((dstsize == 0) || (size <= ldst))
		return (lsrc + size);
	while (src[j] && (j < (size - 1 - ldst)))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (lsrc + ldst);
}
