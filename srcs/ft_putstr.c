/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:58:08 by rimney            #+#    #+#             */
/*   Updated: 2021/11/21 02:27:15 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    ft_putstr(char *str, unsigned int *len)
{
	size_t i;
	if (!str)
	{
		ft_putstr("(null)",len);
		return ;
	}
	i = 0;
	while (str[i])
		ft_putchar(str[i++], len);
}	
