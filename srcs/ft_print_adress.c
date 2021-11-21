/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_adress.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:56:39 by rimney            #+#    #+#             */
/*   Updated: 2021/11/21 00:00:49 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void  ft_print_adress(unsigned long adress, size_t *index, unsigned int *len)
{
	*index += 1;
	write(1, "0x", 2);
	*len += 2;
	ft_print_hex_long(adress, len);
}
