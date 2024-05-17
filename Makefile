# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: djoao <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/14 10:44:07 by djoao             #+#    #+#              #
#    Updated: 2024/05/14 10:44:22 by djoao            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a
FLAGS = -Wall -Wextra -Werror


all:	$(NAME)

$(NAME):
	@gcc $(FLAGS) libft.h *.c 

run:	$(NAME)
	@./a.out

clean:
	@rm -rf *.out

fclean:	clean
	@rm $(NAME)

re:	fclean all
