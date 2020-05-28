NAME = eval_expr

SRCS = src/main.cpp src/Fixed.cpp

OBJS = main.o Fixed.o

INC = -I ./inc

FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) :
	@clang++ $(FLAGS) $(SRCS) $(INC) -c
	@clang++ $(FLAGS) $(OBJS) $(INC) -o $(NAME)
	@mkdir -p obj
	@mv $(OBJS) obj

clean :
	@rm -rf obj

fclean : clean
	@rm $(NAME)

re : fclean all
