CC = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 	main.cpp \
		Base.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = identify

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CXXFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

