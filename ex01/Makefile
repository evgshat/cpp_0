NAME	=	phonebook
SRCS	=	Contact.cpp PhoneBook.cpp main.cpp
OBJS	=	${SRCS:.cpp=.o}
CC		=	clang++
FLAGS	=	-Wall -Werror -Wextra -std=c++98
RM		=	rm -rf
HEADERS	=	Contact.hpp PhoneBook.hpp

all: ${NAME}

${NAME}: ${OBJS}
	${CC} ${FLAGS} $^ -o $@

%.o: %.cpp ${HEADERS} Makefile
	${CC} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
