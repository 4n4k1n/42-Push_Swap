NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
# LDFLAGS = -fsanitize=address,undefined
LIBFT = libft/libft.a

SRC_DIR = src
OBJ_DIR = obj

VPATH = $(SRC_DIR):$(SRC_DIR)/parsing:$(SRC_DIR)/logic:$(SRC_DIR)/utils:$(SRC_DIR)/operations:$(SRC_DIR)/llist

INCLUDES = -Iinc

MAIN_SRCS = main.c

PARSING_SRCS = alloc_args.c \
                count_numbers.c \
                parsing.c \
                valid_input.c \
                is_unique.c \
                index_llist.c

LOGIC_SRCS = logic.c

UTILS_SRCS = cwords.c \
            ft_atoll.c \
            ft_exit.c \
            get_stacks.c \
            ft_sqrt.c

OPER_SRCS = pa_pb.c \
            ra_rb_rr.c \
            rra_rrb_rrr.c \
            sa_sb_ss.c

LLIST_SRCS = create_llist.c

SRCS := $(MAIN_SRCS) $(PARSING_SRCS) $(LOGIC_SRCS) $(UTILS_SRCS) $(OPER_SRCS) $(LLIST_SRCS)

OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(LIBFT):
	$(MAKE) -C libft

$(NAME): $(OBJ_DIR) $(OBJS) $(LIBFT)
	$(CC) $(OBJS) $(LIBFT) -o $(NAME)

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	$(MAKE) -C libft clean
	rm -rf $(OBJ_DIR)

fclean: clean
	$(MAKE) -C libft fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re