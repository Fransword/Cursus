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

char	*strdup(const char *s)
{
	size_t	longitud;
	char	*copia;

	if (s == NULL)
	{
		return (NULL);
	}
	longitud = strlen(s) + 1;
	copia = (char *)malloc(longitud);
	if (copia != NULL)
	{
		strcpy(copia, s);
	}
	return (copia);
}
