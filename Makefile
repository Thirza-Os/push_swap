NAME	=	push_swap

SRC =		push_swap.c

OBJECTS	=	$(SRC:.c=.o)
CFLAGS	=	-Wall -Wextra -Werror
CC		=	gcc

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) -Llibft -lft $(OBJECTS) -o $(NAME)

%.o: %.c
	$(CC) -Ilibft -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

libft/libft.a:
	$(MAKE) -C libft

re: fclean all

.PHONY: all clean fclean re