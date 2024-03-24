CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = op_push.c get_chunk.c quick_sort.c op_rrotate.c \
op_rotate.c op_swap.c push_swap.c \
helpers.c ft_linked_list.c search_and_move.c \
a_to_b.c b_to_a.c sort_all.c ft_malloc.c \
get_next_line/get_next_line.c \
get_next_line/get_next_line_utils.c \
handle_error.c valid_args.c \

SRCB = op_push.c op_rotate.c ft_linked_list.c \
op_swap.c helpers.c get_next_line/get_next_line.c \
get_next_line/get_next_line_utils.c handle_error.c checker_bonus.c ft_cmp_bonus.c ft_malloc.c op_rrotate.c valid_args.c \

OBJ = $(SRC:.c=.o)

OBJB = $(SRCB:.c=.o)

NAME = push_swap

NAMEB = checker_bonus

all : $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

bonus: $(NAMEB)

$(NAMEB) : $(OBJB)
	$(CC) $(CFLAGS) $(OBJB) -o $(NAMEB)

clean:
	rm -rf $(OBJ) $(OBJB)

fclean: clean
	rm -rf $(NAME) $(NAMEB)

re: fclean all clean

.SECONDARY: $(OBJ) $(OBJB)