/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francflo <francflo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:54:21 by francflo          #+#    #+#             */
/*   Updated: 2024/02/05 15:58:22 by francflo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char* ft_itoa(int value, char* s, int base)
{
    if (base < 2 || base > 36)
    {
        write(STDOUT_FILENO, "Base no válida. Debe estar en el rango [2, 36]\n", 47);
        return (NULL);
    }
    char digitChars[] = "0123456789abcdefghijklmnopqrstuvwxyz";
    if (value == 0) 
    {
        s[0] = '0';
        s[1] = '\0';
        return s;
    }
    int i = 0;
    int isn = (value < 0 && base == 10);
    if (isn)
    {
        value = -value;
    }
    while (value != 0)
    {
        int remainder = value % base;
        s[i++] = digitChars[remainder];
        value = value / base;
    }
    if (isn)
    {
        s[i++] = '-';
    }
    s[i] = '\0';
    int start = 0;
    int end = i - 1;
    while (start < end)
    {
        char tmp = s[start];
        s[start] = s[end];
        s[end] = tmp;
        start++;
        end--;
    }
    return (s);
}