NAME = megaphone

FLAGS = -Wall -Werror -Wextra

.PHONY: all, clean, fclean, re
all: $(NAME)

$(NAME):
	@clang++ -c $(FLAGS) megaphone.cpp
	@clang++ $(FLAGS) megaphone.o -o $(NAME)

clean:
	@/bin/rm -f megaphone.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
