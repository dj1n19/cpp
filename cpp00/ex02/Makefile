CC = g++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 	Account.cpp \
		tests.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = account

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

