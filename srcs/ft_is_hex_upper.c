/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_hex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:38:01 by rimney            #+#    #+#             */
/*   Updated: 2021/11/20 23:20:51 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_is_hex_upper(int nb, size_t *index, unsigned int *len)
{
	*index += 1;
	ft_print_hex_uppercase(nb, len);
}
