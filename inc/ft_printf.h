/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <esuguimo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:23:34 by esuguimo          #+#    #+#             */
/*   Updated: 2020/11/15 18:14:05 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"

typedef struct	s_flags
{
	int		star;
	int		width;
	int		zero;
	int		minus;
	int		type;
	int		dot;
}				t_flags;

int				ft_isflag(int c);
int				ft_isconversion(int c);
int				ft_handle_char(char c, t_flags flags);
t_flags			ft_minus_flag(t_flags flags);
t_flags			ft_digit_flag(char c, t_flags flags);
t_flags			ft_width_flag(va_list args, t_flags flags);
int				ft_dot_flag(const char *str, int start,
t_flags *flags, va_list args);
int				ft_handle_hex(unsigned int number,
int lowercase, t_flags flags);
int				ft_handle_int(int i, t_flags flags);
int				ft_handle_percent(t_flags flags);
int				ft_handle_pointer(unsigned long long num, t_flags flags);
int				ft_handle_string(char *str, t_flags flags);
int				ft_handle_uint(unsigned int number, t_flags flags);
int				ft_handle_width(int width, int minus, int zero);
int				ft_handle(int c, t_flags flags, va_list args);
int				ft_printf(const char *fmt, ...);

#endif
