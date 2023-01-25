# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 19:00:57 by melprivi          #+#    #+#              #
#    Updated: 2023/01/25 14:37:16 by melprivi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= libft.a
SRC_F:= ft_isalpha ft_isdigit ft_isalnum \
		ft_isascii ft_isprint ft_strlen \
		ft_memset ft_bzero ft_memcpy \
		ft_memmove

FLAGS:= -Wall -Wextra -Werror
CC:= gcc
HEADER:= libft.h
RM:= rm -f
SRC:= $(addsuffix .c, $(SRC_F))
OBJS:= $(addsuffix .o, $(SRC_F))

%.o: %.c  $(HEADER)
	$(CC) $(FLAGS) -I $(HEADER) -c $< -o $@

all: $(NAME)
	
$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)
	
clean:
	$(RM) $(OBJS)
	
fclean: clean	
	$(RM) $(NAME)

re: fclean all

.PHONY: re clean fclean all