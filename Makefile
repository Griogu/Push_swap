CFLAGS = -g -Wall -Wextra -Werror

NAME = push_swap

OBJS = $(SRCS:.c=.o)

#-------------------------------------------------------COLORS--------------------------------------------------#

BLACK = "\e[30m"
RED = "\e[31m"
GREEN = "\e[32m"
YELLOW = "\e[33m"
BLUE = "\e[34m"
MAGENTA = "\e[35m"
CYAN = "\e[36m"
LIGHT_GRAY = "\e[37m"
DARK_GRAY = "\e[90m"
LIGHT_RED = "\e[91m"
LIGHT_GREEN = "\e[92m"
LIGHT_YELLOW = "\e[93m"
LIGHT_BLUE = "\e[94m"
LIGHT_MAGENTA = "\e[95m"
LIGHT_CYAN = "\e[96m"
WHITE = "\e[97m"
DEFAULT = "\e[39m"

#-------------------------------------------------------SRCS----------------------------------------------------#

LIBFT_PATH = libft
LIBFT = $(LIBFT_PATH)/libft.a

SRCS = exec.c \
	   parsing.c \
	   error_free.c \
	   duplicate_is_sort.c \
	   swap.c \
	   push.c \
	   rotate.c \
	   reverse_rotate.c \
	   sort.c \
	   sort_utils.c \
	   sort_three.c \
	   sort_five.c
#-----------------------------------------------------RULES-----------------------------------------------#

all: $(NAME)

$(LIBFT):
	@make --no-print-directory -C $(LIBFT_PATH)

$(NAME): $(OBJS) $(LIBFT)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT) 
	@echo -n $(GREEN)
	@echo ">>>   Push_swap is compiled ✅  <<<"
	@echo -n $(DEFAULT)

%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@make --no-print-directory -C $(LIBFT_PATH) clean
	@rm -f $(OBJS)

fclean: clean
	@make --no-print-directory -C $(LIBFT_PATH) fclean
	@rm -f $(NAME)
	@echo -n $(YELLOW)
	@echo ">>>   Push_swap is cleaned 🧹  <<<"
	@echo -n $(DEFAULT)


re: fclean all

.PHONY: all clean fclean re
