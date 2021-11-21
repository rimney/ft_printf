/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_uppercase.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:54:15 by rimney            #+#    #+#             */
/*   Updated: 2021/11/20 23:21:03 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_print_hex_uppercase(unsigned int nb, unsigned int *len)
{
    char c;

    if(nb < 16)
    {
        if(nb < 10)
            c = nb + '0';
        else
            c = nb + 55;
        ft_putchar(c, len);
    }
    else
    {
        ft_print_hex_uppercase(nb / 16, len);
        ft_print_hex_uppercase(nb % 16, len);
    }
}
