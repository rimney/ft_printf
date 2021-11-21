/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_undigned_i.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:49:34 by rimney            #+#    #+#             */
/*   Updated: 2021/11/21 00:43:34 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_is_unsigned_i(unsigned int nb, size_t *index, unsigned int *len)
{
	*index += 1;
	ft_putnbr_unsigned(nb, len);
}
