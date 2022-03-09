NAME	=	push_swap

SRC =		push_swap.c

INC_LIB_PATHS := -I libft/src/
LIBS := libft/src/libft.a \

OBJECTS	=	$(SRC:.c=.o)
CFLAGS	=	-Wall -Wextra -Werror $(INC_LIB_PATHS)
CC		=	gcc

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(OBJECTS) $(LIBS) -o $(NAME)

%.o: %.c
	$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

libft/libft.a:
	$(MAKE) -C libft

re: fclean all

.PHONY: all clean fclean re