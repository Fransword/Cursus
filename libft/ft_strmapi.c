/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:17:31 by francflo          #+#    #+#             */
/*   Updated: 2024/02/05 14:20:35 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;
	char			*res;

	if (!s)
		return (NULL);
	str = malloc((sizeof(char)) * ft_strlen(s) + 1);
	if (!str)
		return (NULL);
	i = 0;
	res = str;
	while (*s)
		*str++ = f(i++, (char) *s++);
	*str = '\0';
	return (res);
}
