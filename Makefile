# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: esuguimo <esuguimo@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/01 21:21:50 by esuguimo          #+#    #+#              #
#    Updated: 2020/11/15 17:25:01 by esuguimo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = 	ft_printf.c \
		srcs/ft_handle_char.c \
		srcs/ft_handle_flags.c \
		srcs/ft_handle_hex.c \
		srcs/ft_handle_int.c \
		srcs/ft_handle_percent.c \
		srcs/ft_handle_pointer.c \
		srcs/ft_handle_string.c \
		srcs/ft_handle_uint.c \
		srcs/ft_handle_width.c \
		srcs/ft_handle.c \
		libft/ft_isdigit.c \
		libft/ft_itoa.c \
		libft/ft_u_itoa.c \
		libft/ft_putchar.c \
		libft/ft_putsp.c \
		libft/ft_str_tolower.c \
		libft/ft_strdup.c \
		libft/ft_strlen.c \
		libft/ft_tolower.c \
		libft/ft_utl_base.c 

OBJECTS = ft_printf.o \
		ft_handle_char.o \
		ft_handle_flags.o \
		ft_handle_hex.o \
		ft_handle_int.o \
		ft_handle_percent.o \
		ft_handle_pointer.o \
		ft_handle_string.o \
		ft_handle_uint.o \
		ft_handle_width.o \
		ft_handle.o \
		ft_isdigit.o \
		ft_itoa.o \
		ft_u_itoa.o \
		ft_putchar.o \
		ft_putsp.o \
		ft_str_tolower.o \
		ft_strdup.o \
		ft_strlen.o \
		ft_tolower.o \
		ft_utl_base.o

INCLUDES = inc/ft_printf.h


all: $(NAME)

$(NAME): $(OBJECTS)

$(OBJECTS): $(SRCS) $(INCLUDES)
	@gcc -Wextra -Werror -Wall -c $(SRCS)
	@ar rcs $(NAME) $(OBJECTS)

clean:
	rm -rf $(OBJECTS)
	
fclean: clean
	rm -rf $(NAME)

re: fclean all
bonus: