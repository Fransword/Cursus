/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:25:57 by francflo          #+#    #+#             */
/*   Updated: 2024/01/29 13:34:34 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*cop;

	len = ft_strlen(s) + 1;
	cop = (char *)malloc(len);
	if (cop != NULL)
		ft_strlcpy(cop, s, len);
	return (cop);
}
