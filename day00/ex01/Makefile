NAME = phonebook

FLAGS = -Wall -Werror -Wextra

SRCS = src/main.cpp src/phonebook.cpp

OBJS = main.o phonebook.o

INC = -I ./inc

.PHONY: all, clean, fclean, re
all: $(NAME)

$(NAME):
	@clang++ -c $(FLAGS) $(INC) $(SRCS)
	@clang++ $(FLAGS) $(OBJS) -o $(NAME)
	@mkdir -p obj
	@mv *.o obj

clean:
	@/bin/rm -rf obj

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
