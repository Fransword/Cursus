/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:02:40 by francflo          #+#    #+#             */
/*   Updated: 2024/01/30 13:16:20 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	ptr = (char *)find;
	i = 0;
	if (!*find)
		return ((char *)str);
	if ((size_t)ft_strlen(ptr) > (size_t)ft_strlen((char *)str)
		|| (size_t)ft_strlen(ptr) > n)
		return (0);
	while (i < n && str[i] != '\0')
	{
		j = 0;
		while (ptr[j] == str[i + j] && i + j < n)
		{
			j++;
			if (j == (size_t)ft_strlen(ptr))
				return ((char *)&str[i]);
		}
		i++;
	}
	return (0);
}
