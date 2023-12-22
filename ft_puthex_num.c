/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 21:05:46 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/25 21:06:15 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_num(unsigned int nb, char *base)
{
	int	count;

	count = 0;
	if (nb >= 16)
	{
		count += ft_puthex_num(nb / 16, base);
		count += ft_puthex_num(nb % 16, base);
	}
	else
		count += ft_putchar(base[nb]);
	return (count);
}
