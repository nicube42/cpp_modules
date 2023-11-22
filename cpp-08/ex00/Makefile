NAME	=		EasyFind

SRC			=	main.cpp \

HEADERS		=	easyfind.hpp

OBJ			=	$(SRC:.cpp=.o)

CC			=	g++

RM			=	rm -f

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic


all:			$(NAME)

$(NAME):		$(OBJ)
				$(CC) $(CPPFLAGS) -I $(HEADERS) $(OBJ) -o $(NAME)

%.o:			%.cpp $(HEADERS)
				$(CC) $(CPPFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
