/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_x.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:53:19 by rimney            #+#    #+#             */
/*   Updated: 2021/11/20 23:16:50 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_print_hex_x(unsigned int nb, unsigned int *len)
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
        ft_print_hex_x(nb / 16, len);
        ft_print_hex_x(nb % 16, len);
    }
}
