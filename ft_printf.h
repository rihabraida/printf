/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraida- <rraida-@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:16:25 by rraida-           #+#    #+#             */
/*   Updated: 2023/11/26 19:49:40 by rraida-          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *arg, ...);
int		ft_putnbr(int nb);
int		ft_putchar(int c);
int		ft_putstr(char *str);
char	*ft_strchr(const char *str, int ch);
int		ft_type_data(char c, va_list ap);
int		ft_put_adr(unsigned long nb);
int		ft_puthex_num(unsigned int nb, char *base);
int		ft_putnbr2(unsigned int nb);

#endif