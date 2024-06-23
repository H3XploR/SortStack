NAME = push_swap

DIR_OBJ = obj
OBJ = $(addprefix $(DIR_OBJ)/,*.o)

DIR_SRC = src
SRC = $(addprefix $(DIR_SRC)/,*.c)

FLAGS = -Werror -Wall -Wextra -g
CC = cc

DIR_LIB = lib

DIR_PRINTF = $(addprefix $(DIR_LIB)/,ft_printf)
FT_PRINTF_LIB = libftprintf.a
FT_PRINTF = $(addprefix $(DIR_PRINTF)/,$(FT_PRINTF_LIB))

DIR_LIBFT = $(addprefix $(DIR_LIB)/,libft)
LIBFT_LIB = libft.a
LIBFT = $(addprefix $(DIR_LIBFT)/,$(LIBFT_LIB))

$(NAME): $(OBJ) $(FT_PRINTF) $(LIBFT)
	$(CC) $(OBJ) -o $(NAME) $(FT_PRINTF) $(LIBFT)

$(OBJ): $(DIR_OBJ) $(SRC)
	$(CC) -c $(FLAGS) $(SRC)
	@mv *.o $(DIR_OBJ)

$(FT_PRINTF):
	make -C $(DIR_PRINTF)

$(LIBFT):
	make -C $(DIR_LIBFT)

$(DIR_OBJ):
	@mkdir -p $(DIR_OBJ)

all: $(NAME) $(FT_PRINTF) $(LIBFT)
	make -C $(DIR_PRINTF)
	make -C $(DIR_LIBFT)

clean: 
	rm -rf $(DIR_OBJ)
	make clean -C $(DIR_PRINTF)
	make clean -C $(DIR_LIBFT)

fclean: clean
	rm $(NAME)
	make fclean -C $(DIR_PRINTF)
	make fclean -C $(DIR_LIBFT)

re: fclean all

run:
	./push_swap
	
.PHONY: all re fclean clean run
