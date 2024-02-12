/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:40:35 by francflo          #+#    #+#             */
/*   Updated: 2024/02/05 15:58:40 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*ptr;
	size_t	len;

	i = 0;
	len = ft_strlen(s1) - 1;
	if (!s1[0])
		return (ft_strdup(""));
	while (i <= len && ft_strchr(set, s1[i]))
		i++;
	if (i > len)
		return (ft_strdup(s1 + len + 1));
	while (ft_strchr(set, s1[len]) && len >= 0)
		len--;
	ptr = malloc(sizeof(char) * (len - i + 2));
	if (!ptr)
		return (NULL);
	s1 += i;
	ft_strlcpy (ptr, s1, len - i + 2);
	return (ptr);
}
