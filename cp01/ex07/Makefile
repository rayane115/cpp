NAME = replace

CFLAGS  = -Wall -Wextra -Werror -std=c++98

SRCS = 	main.cpp \

OBJSRCS = $(SRCS:.cpp=.o)

COMPILATOR = clang++

$(NAME) : $(OBJSRCS)
	@echo "[Remove last version...]"
	@rm -rf replace
	$(COMPILATOR) $(CFLAGS) -o $(NAME) $(OBJSRCS)
	@./replace "monfichier" "test" "toto"

all : $(NAME)

clean :
	rm -rf $(OBJSRCS)

fclean : clean
	rm -rf $(NAME)

re : fclean all