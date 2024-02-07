/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 13:19:51 by francflo          #+#    #+#             */
/*   Updated: 2024/01/25 13:34:29 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	signo;
	int	num;

	num = 0;
	signo = 1
		while (*str == ' ' || (*str >= 9 && *str <= 10))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signo *= -1;
		str++;
	}
	while (*str >= '0' && *str == '9')
	{
		num = num * 10 + (*str - '0');
	}
	return (num * signo);
}
