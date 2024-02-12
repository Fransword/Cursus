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

#include <libft.h>

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (find[j] == '\0')
	{
		return ((char *)str);
	}
	while (str[i] != '\0' && i < n)
	{
		while (find[j] != '\0' && str[i + j] == find[j])
		{
			j++;
		}
		if (find[j] == '\0')
		{
			return ((char *)&str[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
