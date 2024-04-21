/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameurant <ameurant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:45:17 by ameurant          #+#    #+#             */
/*   Updated: 2024/04/16 10:53:11 by ameurant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_vprintf(const char *format, va_list args, int *ret)
{
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
				ft_putchar(va_arg(args, int), ret);
			else if (*format == 's')
				ft_putstr(va_arg(args, char *), ret);
			else if (*format == 'd' || *format == 'i')
				ft_putnbr(va_arg(args, int), ret);
			else if (*format == 'u')
				ft_putnbr_unsigned(va_arg(args, unsigned int), ret);
			else if (*format == 'x')
				ft_putnbr_base(va_arg(args, unsigned int), "0123456789abcdef", ret);
			else if (*format == 'X')
				ft_putnbr_base(va_arg(args, unsigned int), "0123456789ABCDEF", ret);
			else if (*format == 'p')
			{
				ft_putstr("0x", ret);
				ft_putnbr_base(va_arg(args, unsigned long long), "0123456789abcdef", ret);
			}
			else if (*format == '%')
				ft_putchar('%', ret);
			format++;
		}
		else
			ft_putchar(*format++, ret);
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		ret;

	va_start(args, format);
	ft_vprintf(format, args, &ret);
	va_end(args);
	return (ret);
}
