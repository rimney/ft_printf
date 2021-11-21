/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:41:44 by rimney            #+#    #+#             */
/*   Updated: 2021/11/21 00:38:24 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_is_decimal(int nb, size_t *index, unsigned int *len)
{
	*index += 1;
	ft_putnbr_signed(nb, len);
}
