/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:07:41 by francflo          #+#    #+#             */
/*   Updated: 2023/11/29 16:10:53 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_isascii(int ascii)
{
	if (ascii >= 0 && ascii <= 127)
	{
		write (1, &ascii, 1);
	}
	else
	{
		write(1, "no", 2);
	}
}