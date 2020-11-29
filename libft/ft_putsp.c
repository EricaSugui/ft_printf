/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <esuguimo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:30:51 by esuguimo          #+#    #+#             */
/*   Updated: 2020/11/15 17:31:13 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putsp(char *str, int precision)
{
	int i;

	i = 0;
	while (str[i] && i < precision)
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
