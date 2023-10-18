NAME	=	animals
SRCS	=	main.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp Animal.cpp
OBJS	=	$(SRCS:.cpp=.o)
CFLAGS	=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	clang++ -Wall -Wextra -Werror -I. -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY:	all clean fclean re test