# SRCS = 	ft_printf.c\
# 		ft_printf_d_i.c\
# 		ft_putnbr_base.c\
# 		printf_p.c\
# 		printf_s.c
# 		#ft_printf_pourcent.c

# CC = gcc

# CFLAGS = -Wall -Wextra -Werror

# NAME = libftprintf.a

# OBJETS_DIR = objs/

# OBJS = $(addprefix $(OBJS_DIR), $(notdir $(SRCS:.c=.o)))

# .PHONY: all clean fclean re

# all: $(NAME)

# $(OBJS_DIR)%.o : %.c | $(OBJS_DIR) libftprintf.h
# 	@echo "Compiling: $<"
# 	@$(CC) $(CFLAGS) -c $< -o $@ -I.


# $(NAME): $(OBJS)
# 	@ar rcs $@ $^
# 	@echo "Libft Done !"


# #La règle pour supprimer les fichiers objets.
# clean:
# 	@rm -rf $(OBJS_DIR)

# #La règle pour supprimer les fichiers objets et la bibliothèque statique.
# fclean: clean
# 	@rm -f $(NAME)

# #La règle pour reconstruire la bibliothèque statique à partir de zéro.
# re: fclean all


# Variables
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

# Source files
SRC = ft_printf.c ft_printf_d_i.c ft_printf_pourcent.c ft_putnbr_base.c printf_p.c printf_s.c
OBJ = $(SRC:.c=.o)

# Target
NAME = libftprintf.a

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re