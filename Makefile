CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = push_outils.c push_to_chunk.c quick_sort.c rev_rotate_outils.c \
rotate_outils.c swap_outils.c push_swap.c \
ft_atoi.c ft_linked_list.c search_and_move.c \
xi7aja.c xi7aja2.c sort_1_2_3_4_5_6.c ft_malloc.c \
get_next_line/get_next_line.c \
get_next_line/get_next_line_utils.c \
handle_error.c
SRCB = checker_bonus.c push_outils.c rev_rotate_outils.c ft_linked_list.c \
rotate_outils.c swap_outils.c ft_atoi.c get_next_line/get_next_line.c \
get_next_line/get_next_line_utils.c \

OBJ = $(SRC:.c=.o)

OBJB = $(SRCB:.c=.o)

NAME = push_swap

NAMEB = checker

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

bonus: $(OBJB)
	$(CC) $(CFLAGS) $(OBJB) -o $(NAMEB)

clean:
	rm -rf $(OBJ) $(OBJB)

fclean: clean
	rm -rf $(NAME) $(NAMEB)

re: fclean all clean