/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:34:14 by francflo          #+#    #+#             */
/*   Updated: 2024/02/19 15:20:57 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf_write(int c, int i);
int	ft_found_c(int c, int i);
int	ft_found_s(char *s, int i);
int	ft_found_d(int d, int i);
int	ft_found_bx(long int bx, int i);
int	ft_found_x(long int x, int i);
int	ft_found_u(unsigned int u, int i);
int	ft_next_percent(const char *format, va_list args, int i, int j);
int	ft_found_u(unsigned int u, int i);
int	ft_found_p(size_t p, int i);
int	ft_printf(const char *format, ...);

#endif