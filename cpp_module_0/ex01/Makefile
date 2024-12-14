NAME = contact_manager

CC = c++

CFLAGS = -Wall -Werror -Wextra -DSCREEN_SIZE=80 -std=c++98

CPP_MANDATORY_SOURCE = ./main.cpp \
					   ./get_contact.cpp \
					   ./draw.cpp \
					   ./listen_to_input.cpp \
					   ./add_contact.cpp \
					   ./search_contact.cpp \
					   ./string_manipulation.cpp \
					   ./set_terminal_mode.cpp \
					   ./PhoneBook.cpp \
					   ./Contact.cpp

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
