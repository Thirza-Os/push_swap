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


NAME	=	push_swap

SRC	    =	src/push_swap.c			\
			src/rules.c		\
			src/more_rules.c	\
			src/most_rules.c	\
			src/sort_small.c	\
			src/sort_four_five.c	\
			src/sort_big.c		\
			src/sort_index.c    	\
			src/utils.c		\
			src/utils_str.c

LIB	    =   ./libs/libft/src/libft.a

LIB_HEADERS = 	-I./libs/libft/src/
HEADER	=	./include/push_swap.h
OBJECTS	=	$(SRC:.c=.o)
INCLUDE =	-I include $(LIB_HEADERS)
CFLAGS	=	-Wall -Wextra -Werror
CC    	=	gcc

all: $(NAME)

$(LIB):
	@$(MAKE) -s -C $(dir $(LIB))
	@echo "libft maked"

$(NAME):$(OBJECTS) $(HEADER) $(LIB)
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
