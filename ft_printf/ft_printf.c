/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:03:06 by francflo          #+#    #+#             */
/*   Updated: 2024/02/21 13:03:06 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_next_percent(const char *format, va_list args, int i, int j)
{
	if (format[j] == 'c')
		i = ft_found_c(va_arg(args, int), i);
	if (format[j] == 's')
		i = ft_found_s(va_arg(args, char *), i);
	if (format[j] == 'd')
		i = ft_found_d(va_arg(args, int), i);
	if (format[j] == 'i')
		i = ft_found_d(va_arg(args, int), i);
	if (format[j] == 'p')
		i = ft_found_p(va_arg(args, size_t), i);
	if (format[j] == 'x')
		i = ft_found_x(va_arg(args, long int), i);
	if (format[j] == 'X')
		i = ft_found_bx(va_arg(args, long int), i);
	if (format[j] == 'u')
		i = ft_found_u(va_arg(args, unsigned int), i);
	if (format[j] == '%')
		i = ft_found_c('%', i);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int	i;
	int	j;
	va_list	args;

	i = 0;
	j = 0;
	va_start(args, format);
	while (format[j])
	{
		if (format[j] == '%')
			i = ft_next_percent(format, args, i, ++j);
		else
		{
			i++;
			write(1, &format[j], 1);
		}
		j++;
	}
	va_end(args);
	return (i);
}
