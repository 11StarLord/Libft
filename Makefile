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