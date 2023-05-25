/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-lo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:41:40 by jlima-lo          #+#    #+#             */
/*   Updated: 2023/04/26 14:41:42 by jlima-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <limits.h>

int			ft_printf(const char *frmt, ...);
int			res_printf(const char *frmt, va_list arg);
int			ft_flag(va_list arg, const char frmt);
int			ft_putchar(char c);
int			ft_printf_hex(unsigned long num);
int			ft_printf_hexi(unsigned long num);
int			ft_printf_str(char *c);
int			ft_printf_nbr(int num);
int			ft_printf_uns(long num);
int			ft_printf_ptr(uintptr_t num);
int			ft_printf_p(unsigned long num);
/* int			print_m_long(long num); */

#endif
