/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <esuguimo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:49:47 by esuguimo          #+#    #+#             */
/*   Updated: 2020/11/15 17:49:59 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static int	ft_input(char *u_num, t_flags flags)
{
	int count;

	count = 0;
	if (flags.dot >= 0)
		count += ft_handle_width(flags.dot - 1, ft_strlen(u_num) - 1, 1);
	count += ft_putsp(u_num, ft_strlen(u_num));
	return (count);
}

static int	ft_put_uint(char *u_num, t_flags flags)
{
	int count;

	count = 0;
	if (flags.minus == 1)
		count += ft_input(u_num, flags);
	if (flags.dot >= 0 && (size_t)flags.dot < ft_strlen(u_num))
		flags.dot = ft_strlen(u_num);
	if (flags.dot >= 0)
	{
		flags.width -= flags.dot;
		count += ft_handle_width(flags.width, 0, 0);
	}
	else
		count += ft_handle_width(flags.width, ft_strlen(u_num), flags.zero);
	if (flags.minus == 0)
		count += ft_input(u_num, flags);
	return (count);
}

int			ft_handle_uint(unsigned int number, t_flags flags)
{
	int		count;
	char	*u_num;

	count = 0;
	number = (unsigned int)(4294967295 + 1 + number);
	if (flags.dot == 0 && number == 0)
	{
		count += ft_handle_width(flags.width, 0, 0);
		return (count);
	}
	u_num = ft_u_itoa(number);
	count = ft_put_uint(u_num, flags);
	free(u_num);
	return (count);
}
