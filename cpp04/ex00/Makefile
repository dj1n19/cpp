CC = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 	main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp

OBJS = ${SRCS:.cpp=.o}

NAME = animal

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CXXFLAGS} -o ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

