# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: parmarti <parmarti@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/13 12:59:37 by parmarti          #+#    #+#              #
#    Updated: 2020/07/20 21:30:09 by parmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c check_format.c print_flags.c print_char.c print_string.c print_pointer.c print_int.c print_unsigned.c print_hex.c print_percent.c

LBRS = printf.h

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

AR = ar rcs

NORME = norminette -R CheckForbiddenSourceHeader

all:	$(NAME)

$(NAME):	$(OBJS) _libft
			#@gcc -o  $(NAME) $(OBJS) $(shell find libft/ -name "libft.a")
			$(AR) $(NAME) $(OBJS) $(shell find libft/ -name "*.o")
			@ranlib $(NAME)

_libft:	
			@make -C libft

clean:
			$(RM) $(OBJS)
			@make clean -C libft

fclean:		clean
			$(RM) $(NAME)
			@make fclean -C libft

re:			fclean all

norme:		
			$(NORME) $(SRCS) $(LBRS)

.PHONY:		all clean fclean re norme
