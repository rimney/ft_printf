/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rimney <rimney@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:15:34 by rimney            #+#    #+#             */
/*   Updated: 2021/11/21 01:30:36 by rimney           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_is_flag(const char *str, size_t i);
void	ft_is_decimal(int nb, size_t *index, unsigned int *len);
void	ft_is_char(int arg, size_t *index, unsigned int *len);
void    ft_is_string(char *str, size_t *index, unsigned int *len);
void    ft_is_unsigned_i(unsigned int nb, size_t *index, unsigned int *len);
void    ft_print_hex_x(unsigned int nb, unsigned int *len);
void    ft_print_hex_uppercase(unsigned int nb, unsigned int *len);
void		ft_putchar(char c, unsigned int *len);
void    ft_print_hex_long(unsigned long nb, unsigned int *len);
void  ft_print_adress(unsigned long adress, size_t *index, unsigned int *len);
int		ft_error(const char *str);
void	ft_putstr(char *str, unsigned int *len);
void	ft_putnbr_unsigned(unsigned int nb, unsigned int *len);
void	ft_putnbr_signed(int nb, unsigned int *len);
size_t	ft_strlen(char *str);
int		ft_intlen(int nb);
int ft_printf(const char *format, ...);
void	ft_is_hex_lower(int nb, size_t *index, unsigned int *len);
void    ft_is_hex_upper(int nb, size_t *index, unsigned int *len);
#endif