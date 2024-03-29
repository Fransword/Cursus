/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:16:04 by francflo          #+#    #+#             */
/*   Updated: 2024/01/30 15:30:23 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*desti;
	char	*srcp;
	size_t	i;

	desti = (char *) dest;
	srcp = (char *) src;
	i = 0;
	if (desti == NULL && srcp == NULL && n > 0)
		return (NULL);
	while (i < n)
	{
		desti[i] = srcp[i];
		i++;
	}
	return (desti);
}
