/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:31:54 by francflo          #+#    #+#             */
/*   Updated: 2024/02/05 15:49:24 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
int		ft_atoi(char *str);
void	ft_bzero(void *s, size_t n);
void	*my_calloc(size_t num_items, size_t size_of_item);
void	ft_isalnum(int num);
void	ft_alpha(int alpha);
void	ft_isascii(int ascii);
void	ft_isdigit(int digit);
void	ft_isprint(int print);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s, const void *c, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*my_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *block, int save, size_t n);
char	*ft_strchr(const char *s, int c);
char	*strdup(const char *s);
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
int		ft_strlen(char *str);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *str, const char *find, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	ft_tolower(char letra);
char	ft_toupper(char letra);
#endif