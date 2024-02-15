#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int ft_printf_write(int c, int i)
{
    i++;
    write(1, &c, 1);
    return (i);
}

int ft_found_d(int d, int i)
{
    if (d == -2147483648)
    {
        write (1, "-2147483648", 11);
        i = i + 11;
    }
    else if (d < 0)
    {
        i = ft_printf_write('-', i);
        i = ft_found_d(-d, i);
    }
    else if (d >= 0 && d < 10)
        i = ft_printf_write(d + '0', i);
    else
    {
        i = ft_found_d(d / 10, i);
        i = ft_printf_write(d % 10 + '0', i);
    }
    return (i);
}

int ft_found_s(char *s, int i)
{
    if (!s)
        i = ft_found_s("(null)", i);
    else
    {
        while (*s)
        {
            write(1, &(*s), 1);
            i++;
            s++;
        }
    }
    return (i);
}

int ft_found_x(size_t x, int i)
{
    if (x == 0)
        i = ft_printf_write('0', i);
    else if (x >= 16)
    {
        i = ft_found_x(x / 16, i);
        i = ft_found_x(x % 16, i);
    }
    else
    {
        if (x <= 9)
            i = ft_printf_write(x + '0', i);
        else
            i = ft_printf_write(x + 'a' - 10, i);
    }
    return (i);
}


int ft_next_percent(const char *format, va_list args, int i, int j)
{
    if (format[j] == 's')
        i = ft_found_s(va_arg(args, char *), i);
    if (format[j] == 'd')
        i = ft_found_d(va_arg(args, int), i);
    if (format[j] == 'x')
        i = ft_found_x(va_arg(args, unsigned int), i);
    return (i);
}

int ft_printf(const char *format, ... )
{
    va_list args;
    int     i;
    int     j;

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

int main(void)
{
    int i;

    i = ft_printf("mi_printf\ns: %s, d: %d, x: %x\n", "mapache fumón", 42, 42);
    printf("i: %i\n", i);
    //i = printf("real --> hello 42!\ns: %s, d: %d, x: %x\n", NULL, 42, 42);
    //printf("i: %i\n\n", i);
    return (0);
}