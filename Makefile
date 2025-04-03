
CC = gcc
CFLAGS = -g -Wall -Wextra -Werror -Iincludes -Ilibft -g3
LDFLAGS = -Llibft -lft


SRC_DIR = srcs
INC_DIR = includes
LIBFT_DIR = libft

SRCS = $(SRC_DIR)/main.c \
       $(SRC_DIR)/input_parsing.c \
	   $(SRC_DIR)/input_parsing2.c \
       $(SRC_DIR)/algorithms.c \
       $(SRC_DIR)/sort_utils3.c \
       $(SRC_DIR)/sort_utils.c \
	   $(SRC_DIR)/sort_utils2.c \
	   $(SRC_DIR)/index_numbers.c \
       $(SRC_DIR)/sort.c \
	   $(SRC_DIR)/operations.c \
	   $(SRC_DIR)/quit.c \
	   $(SRC_DIR)/init_stack.c

OBJS = $(SRCS:.c=.o)

NAME = push_swap

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFT_DIR)
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
