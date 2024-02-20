/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 12:34:14 by francflo          #+#    #+#             */
/*   Updated: 2024/02/20 04:18:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf_write(int c, int i);
int	ft_found_c(int c, int i);
int	ft_found_s(char *s, int i);
int	ft_found_d(int d, int i);
int	ft_found_bx(size_t bx, int i);
int	ft_found_x(size_t x, int i);
int	ft_found_u(unsigned int u, int i);
int	ft_next_percent(const char *format, va_list args, int i, int j);
int	ft_found_u(unsigned int u, int i);
int	ft_found_p(size_t p, int i);
int	ft_printf(const char *format, ...);

#endif