# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 16:35:27 by ccaluwe           #+#    #+#              #
#    Updated: 2022/03/09 16:36:30 by ccaluwe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
CC	= gcc
CFLAGS	= -Wall -Wextra -Werror
RM	= /bin/rm -f
INCLUDE = ft_printf.h

SRC	=	ft_printf.c ft_perc.c ft_printdec.c ft_printchar.c ft_printstr.c \
			ft_printintdec.c ft_unsigndec.c ft_hexa_up.c ft_hexa_low.c ft_void_hex.c \
			ft_printf_utils.c

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ) $(INCLUDE)
			ar rc $(NAME) $(OBJ)

.c.o:		$(SRC)
			$(CC) $(CFLAGS)	-c -o $@ $<
clean: 
		$(RM) $(OBJ)

fclean:		clean
			$(RM) $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
