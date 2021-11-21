/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:15:24 by rimney            #+#    #+#             */
/*   Updated: 2021/11/21 02:17:29 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

void	ft_apply(char c,va_list args, unsigned int *len, size_t *i)
{
	
	if(c == 'd')
		ft_is_decimal(va_arg(args, int), i , len);
	if(c == 's')
		ft_is_string(va_arg(args, char *), i, len);
	if(c == 'c')
		ft_is_char(va_arg(args, int), i, len);
	if(c == 'x')
		ft_is_hex_lower(va_arg(args, unsigned int), i,len);
	if(c == 'X')
		ft_is_hex_upper(va_arg(args, unsigned int), i, len);
	if(c == 'p')
		ft_print_adress(va_arg(args, long), i, len);
	if(c == 'u')
		ft_is_unsigned_i(va_arg(args, unsigned int), i, len);		
	if(c == 'i')
		ft_is_decimal(va_arg(args, int), i , len);
	if(c == '%')
	{
		ft_putchar('%', len);
		*i += 1;
	}
}

int ft_printf(const char *format, ...)
{
	va_list arg;
	size_t i;
	unsigned int len;

	i = 0;
	len = 0;
	va_start(arg, format);
	while(format[i])
	{
		if(format[i] != '%')
			ft_putchar(format[i], &len);
		if(format[i] == '%')
			ft_apply(format[i + 1], arg, &len, &i);
		i++;
	}
	return(len);
}