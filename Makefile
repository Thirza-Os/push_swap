# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tosinga <tosinga@student.42.fr>              +#+                      #
#                                                    +#+                       #
#    Created: 2022/02/02 18:40:49 by tosinga       #+#    #+#                  #
#    Updated: 2022/02/02 18:40:49 by tosinga       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #


NAME	=		push_swap

SRC =			push_swap.c			\
				rules.c				\
				more_rules.c		\
				most_rules.c		\
				sort_small.c		\
				sort_four_five.c	\
				sort_big.c			\
				sort_index.c 		\
				utils.c				\
				utils_str.c

LIB= 			./libft/libft.a

HEADER =		push_swap.h
OBJECTS	=		$(SRC:.c=.o)
INCLUDE =		-I.
CFLAGS	=		-Wall -Wextra -Werror
CC		=		gcc

all: $(NAME)

$(LIB):
	@$(MAKE) -s -C $(dir $(LIB))
	@echo "libft maked"

$(NAME):	$(OBJECTS) $(HEADER) $(LIB)
	$(CC) $(CFLAGS) $(INCLUDE) $(LIB) -o $(NAME) $(OBJECTS)
	@echo "maked"

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@$(RM) $(OBJECTS)
	@$(MAKE) -s -C $(dir $(LIB)) clean
	@echo "maked clean"

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) -s -C $(dir $(LIB)) fclean
	@echo "maked fclean"

re: fclean all

.PHONY: all clean fclean re