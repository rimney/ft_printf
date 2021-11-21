/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_long.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:55:55 by rimney            #+#    #+#             */
/*   Updated: 2021/11/21 00:01:00 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_print_hex_long(unsigned long nb, unsigned int *len)
{

    char c;

    if(nb < 16)
    {
        if(nb < 10)
            c = nb + '0';
        else
            c = nb + 87;
        ft_putchar(c, len);
    }
    else
    {
        ft_print_hex_long(nb / 16, len);
        ft_print_hex_long(nb % 16, len);
    }
}
