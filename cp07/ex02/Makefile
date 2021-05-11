NAME = Array

FLAG  = -Wall -Wextra -Werror -std=c++98

SRCS = 	main.cpp \
		Array.cpp \

OBJSRCS = $(SRCS:.cpp=.o)

CC = clang++

$(NAME) : $(OBJSRCS)
	$(CC) $(FLAG) -o $(NAME) $(OBJSRCS)

all : $(NAME)

clean :
	rm -rf $(OBJSRCS)

fclean : clean
	rm -rf $(NAME)

re : fclean all