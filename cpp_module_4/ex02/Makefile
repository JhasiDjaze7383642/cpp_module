NAME = animal

CC = c++

CFLAGS = -Wall -Werror -Wextra -std=c++98

CPP_MANDATORY_SOURCE = ./main.cpp \
					   ./Animal.cpp \
					   ./Dog.cpp \
					   ./Cat.cpp \
					   ./Brain.cpp

CPP_MANDATORY_OBJECT = ${CPP_MANDATORY_SOURCE:.cpp=.o} 

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${CPP_MANDATORY_OBJECT}
	${CC} ${CFLAGS} ${CPP_MANDATORY_OBJECT} -o ${NAME}

clean:
	rm -f $(CPP_MANDATORY_OBJECT)

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: clean fclean re all
