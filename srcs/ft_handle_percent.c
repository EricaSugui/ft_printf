/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <esuguimo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:47:00 by esuguimo          #+#    #+#             */
/*   Updated: 2020/11/15 17:47:10 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_handle_percent(t_flags flags)
{
	int count;

	count = 0;
	if (flags.minus == 1)
		count += ft_putsp("%", 1);
	count += ft_handle_width(flags.width, 1, flags.zero);
	if (flags.minus == 0)
		count += ft_putsp("%", 1);
	return (count);
}
