CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
AR = ar rcs
RM =  rm -f


#Archivos fuentes de las funciones principales
SRC =

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(BONUS_OBJ)

#Regla para limpiar todo
fclean: clean
	$(RM) $(NAME)

#Recompilar todo
re: fclean all
