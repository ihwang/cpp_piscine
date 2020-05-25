NAME = replace

FLAGS = -Wall -Werror -Wextra

SRC = src/main.cpp

OBJ = main.o

.PHONY: all, clean, fclean, re

all: $(NAME)

$(NAME):
	@clang++ -c $(FLAGS) $(SRC)
	@clang++ $(FLAGS) $(OBJ) -o $(NAME)
	@mkdir -p obj/
	@mv $(OBJ) obj/

clean:
	@/bin/rm -rf obj/

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
