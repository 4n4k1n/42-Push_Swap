NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC_DIR = src
OBJ_DIR = obj

VPATH = $(SRC_DIR):$(SRC_DIR)/parsing:$(SRC_DIR)/logic:$(SRC_DIR)/utils:$(SRC_DIR)/sorting

INCLUDES = -Iinc

MAIN_SRCS = main.c

PARSING_SRCS = parser.c \
               input_validation.c \
               error_handling.c

LOGIC_SRCS = algorithm.c \
             stack_operations.c \
             optimization.c

UTILS_SRCS = utils.c \
             memory.c \
             string_utils.c

SORTING_SRCS = quick_sort.c \
               merge_sort.c \
               push_swap_algo.c

SRCS := $(MAIN_SRCS) $(PARSING_SRCS) $(LOGIC_SRCS) $(UTILS_SRCS) $(SORTING_SRCS)

OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re