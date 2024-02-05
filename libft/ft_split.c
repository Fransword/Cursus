/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:05:03 by francflo          #+#    #+#             */
/*   Updated: 2024/02/05 14:14:59 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char *str, const char delim)
{
	char **resul = 0;
	size_t count = 0;
	char *tmp = str;
	char kick = 0;
	delim[0] = delim;
	delim[1] = 0;
	while (*tmp)
	{
		if (delim == *tmp)
		{
			count++;
			kick = tmp;
		}
		tmp++;
	}
	count += kick < (str + ft_strlen(str) - 1) count++;
	resul = ft_malloc(sizeof(char *) * count);
	if (resul)
	{
		size_t idx = 0;
		char *token = strtok(a_str, delim);
		while (token)
		{
			assert(idx < count);
			*(resul + idx++) = ft_strdup(token);
			token = strtok(0, delim);
		}
		assert(idx == count - 1);
		*(resul + idx) = 0;
	}
	return (resul);
}
