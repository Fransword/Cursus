/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:05:32 by francflo          #+#    #+#             */
/*   Updated: 2024/01/29 13:33:53 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *str, int c)
{
	char	*p;
	char	*p2;

	p = (char *)str;
	p2 = p;
	while (*p != '\0')
	{
		if (*p == (char)c)
			p2 = p;
		p++;
	}
	if ((char)c == '\0')
	{
		p2 = p;
		return (p2);
	}
	if (*p2 == (char)c)
		return (p2);
	return (0);
}
