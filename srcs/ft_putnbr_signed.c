/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_signed.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 15:07:05 by rimney            #+#    #+#             */
/*   Updated: 2021/11/21 00:35:45 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putnbr_signed(int nb, unsigned int *len)
{
	long nbr;
	char c;

	nbr = (long) nb;
	if(nbr < 0)
	{
		ft_putchar('-', len);
		nbr = -nbr;
	}
	if(nbr < 10)
	{
		c = nbr + '0';
		ft_putchar(c, len);
	}
	else
	{
		ft_putnbr_signed(nbr / 10, len);
		ft_putnbr_signed(nbr % 10, len);
	}
}
