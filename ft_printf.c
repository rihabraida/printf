/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:14:47 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/28 12:04:42 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_type_data(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == 'c')
		count = ft_putchar(va_arg(ap, int));
	else if (c == 's')
		count = ft_putstr(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		count = ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		count = ft_putnbr2(va_arg(ap, unsigned int));
	else if (c == 'x')
		count = ft_puthex_num(va_arg(ap, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		count = ft_puthex_num(va_arg(ap, unsigned int), "0123456789ABCDEF");
	else if (c == 'p')
	{
		count = ft_putstr("0x");
		count += ft_put_adr(va_arg(ap, unsigned long));
	}
	else if (c == '%')
		count = ft_putchar('%');
	return (count);
}

int	ft_printf(const char *arg, ...)
{
	va_list	ap;
	int		i;
	int		count;

	va_start(ap, arg);
	i = 0;
	count = 0;
	while (arg[i] != '\0')
	{
		if (arg[i] == '%')
		{
			i++;
			if (ft_strchr("csdpiuxX%", arg[i]))
				count += ft_type_data(arg[i], ap);
			else
				count += ft_putchar(arg[i]);
		}
		else
			count += ft_putchar(arg[i]);
		i++;
	}
	va_end(ap);
	return (count);
}
