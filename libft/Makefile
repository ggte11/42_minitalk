# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcardoso <mcardoso@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/04 15:46:11 by mcardoso          #+#    #+#              #
#    Updated: 2025/04/21 16:21:47 by mcardoso         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# compiler e flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

# apagar ficheiros e cria ficheiros .a
RM = rm -f
COMPRESS = ar rcs

SRCS =	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_bzero.c \
		ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
		ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_strtrim.c ft_substr.c ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_tolower.c ft_toupper.c \
		ft_printf.c get_next_line_utils.c get_next_line.c sources.c

BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			 ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
			 ft_lstclear.c ft_lstiter.c ft_lstmap.c \

# trasforma .c para .o
OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

# compila .c em .o e junta tudo em libft.a
$(NAME): $(OBJS)
	@$(COMPRESS) $(NAME) $?
	@echo "Library $(NAME) Created successefully!"

# juntas os ficheiros bonus na library
# o touch cria um ficheiro bonus para o make saber que ja foi adicionado
bonus: $(NAME) $(OBJS) $(OBJS_BONUS)
	@$(COMPRESS) $(NAME) $?
	@echo "Bonus added to $(NAME)!"
	@touch bonus

# compila qualquer .c em .o ($< ficheiro de entrada .c, $@ de saida)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# remove os .o
clean:
	@$(RM) $(OBJS) $(OBJS_BONUS)
	@touch bonus
	@rm bonus
	@echo "Cleaned up object files."

# fclean remove tudo incluindo o libft.a
fclean: clean
	@$(RM) $(NAME)
	@echo "All cleaned: $(NAME)!"

# make re: limpa tudo e recompila
re: fclean all

#estas palavras sao tratadas como comandos e nao ficheiros
.PHONY: all clean fclean re
