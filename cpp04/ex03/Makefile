CC = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 	main.cpp \
		AMateria.cpp \
		Character.cpp \
		Cure.cpp \
		Ice.cpp \
		MateriaSource.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = materia

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CXXFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

