/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:31:26 by francflo          #+#    #+#             */
/*   Updated: 2024/02/05 14:02:23 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	len_resul;
	char	*resul;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	len_resul = len_s1 + len_s2 + 1;
	resul = (char *)malloc(len_resul);
	if (resul == NULL)
		return (NULL);
	ft_strlcpy(resul, s1, len_s1 + 1);
	ft_strlcat(resul, s2, len_resul);
	return (resul);
}
