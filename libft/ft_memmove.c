/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:30:23 by marvin            #+#    #+#             */
/*   Updated: 2023/12/13 11:30:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*my_memmove(void *dest, const void *src, size_t n)
{
	if (dest <= src || dest >= (char *) src + n)
	{
		while (n--)
		{
			*(char *) dest = *(char *) src;
			dest = (char *) dest + 1;
			src = (char *) src + 1;
		}
	}
	else
	{
		dest = (char *)dest + n - 1;
		src = (char *)src + n - 1;
		while (n--)
		{
			*(char *) dest = *(char *) src;
			dest = (char *) dest - 1;
			src = (char *) src - 1;
		}
	}
	return (dest);
}
