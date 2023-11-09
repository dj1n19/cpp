CC = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 	main.cpp \

OBJS = ${SRCS:.cpp=.o}

NAME = array

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CXXFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

