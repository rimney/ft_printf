/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:59:23 by rimney            #+#    #+#             */
/*   Updated: 2021/11/21 00:36:42 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putnbr_unsigned(unsigned int nb, unsigned int *len)
{
	char			c;
	unsigned long nbr;

	nbr = (unsigned long) nb;
	if(nbr < 10)
	{
		c = nbr + '0';
		ft_putchar(c, len);
	}
	else
	{
		ft_putnbr_unsigned(nbr / 10, len);
		ft_putnbr_unsigned(nbr % 10, len);
	}
}
