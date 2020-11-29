/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esuguimo <esuguimo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 17:31:39 by esuguimo          #+#    #+#             */
/*   Updated: 2020/11/15 18:31:04 by esuguimo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int			ft_isdigit(int c);
int			ft_tolower(int c);
char		*ft_itoa(int n);
int			ft_putchar(char c);
char		*ft_str_tolower(char *str);
char		*ft_strdup(const char *s1);
size_t		ft_strlen(const char *str);
int			ft_putsp(char *str, int precision);
char		*ft_u_itoa(unsigned int n);
char		*ft_utl_base(unsigned long long number, int base);

#endif
