/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 14:38:05 by francflo          #+#    #+#             */
/*   Updated: 2024/01/30 15:25:28 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	n;
	char			*dest;

	if (start >= (unsigned int)strlen(s))
		return (NULL);
	n = len - start;
	dest = (char *)malloc(sizeof(char) * (n + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, (s + start), n + 1);
	return (dest);
}
