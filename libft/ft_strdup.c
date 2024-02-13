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

#include <libft.h>

char	*ft_strdup(const char *s)
{
	size_t	lon;
	char	*cop;

	lon = ft_strlen(s) + 1;
	cop = (char *)malloc(lon);
	if (cop != NULL)
		ft_strlcpy(cop, s, lon);
	return (cop);
}
