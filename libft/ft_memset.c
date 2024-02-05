/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:08:46 by francflo          #+#    #+#             */
/*   Updated: 2023/11/29 16:26:25 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset( void *block, int save, size_t n)
{
	char	*ablock;
	size_t	a;

	ablock = (char *) block;
	a = 0;
	while (a < n)
	{
		ablock[a] = save;
		a++;
	}
	return (block);
}
