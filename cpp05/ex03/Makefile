NAME	=	bureaucrat
SRCS	=	main.cpp Form.cpp Bureaucrat.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
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