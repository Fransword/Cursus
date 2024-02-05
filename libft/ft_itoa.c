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

char* ft_itoa(int value, char* s, int base) {
    // Verificar si la base es válida
    if (base < 2 || base > 36) {
        fprintf(stderr, "Base no válida. Debe estar en el rango [2, 36]\n");
        return NULL;
    }

    // Caracteres que representan los dígitos
    char digitChars[] = "0123456789abcdefghijklmnopqrstuvwxyz";

    // Manejar el caso especial de 0
    if (value == 0) {
        s[0] = '0';
        s[1] = '\0';
        return s;
    }

    // Inicializar un índice para construir la cadena desde el final
    int i = 0;

    // Manejar números negativos
    int isNegative = (value < 0 && base == 10);
    if (isNegative) {
        value = -value;
    }

    // Construir la cadena desde el final hacia el principio
    while (value != 0) {
        int remainder = value % base;
        s[i++] = digitChars[remainder];
        value = value / base;
    }

    // Agregar el signo negativo si es necesario
    if (isNegative) {
        s[i++] = '-';
    }

    // Agregar el terminador nulo
    s[i] = '\0';

    // Invertir la cadena para obtener el orden correcto
    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }

    return s;
}