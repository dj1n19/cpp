CC = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 	ClapTrap.cpp \
		main.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = claptrap

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

