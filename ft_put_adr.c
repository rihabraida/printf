/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_adr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:05:07 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/26 20:04:37 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_adr(unsigned long nb)
{
	int		count;
	char	*base;

	base = "0123456789abcdef";
	count = 0;
	if (nb >= 16)
	{
		count += ft_put_adr(nb / 16);
		count += ft_put_adr(nb % 16);
	}
	else
		count += ft_putchar(base[nb]);
	return (count);
}
