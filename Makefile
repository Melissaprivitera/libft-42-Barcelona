# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 19:00:57 by melprivi          #+#    #+#              #
#    Updated: 2023/04/27 21:18:17 by melprivi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= libft.a
SRC_F:= ft_isalpha ft_isdigit ft_isalnum \
		ft_isascii ft_isprint ft_strlen \
		ft_memset ft_bzero ft_memcpy \
		ft_memmove ft_strlcpy ft_strlcat \
		ft_toupper ft_tolower ft_strchr \
		ft_strrchr ft_strncmp ft_memchr \
		ft_memcmp ft_strnstr ft_atoi \
		ft_calloc ft_strdup ft_substr \
		ft_strjoin ft_strtrim ft_split

FLAGS:= -Wall -Wextra -Werror
CC:= gcc
HEADER:= libft.h
RM:= rm -f
SRC:= $(addsuffix .c, $(SRC_F))
OBJS:= $(addsuffix .o, $(SRC_F))

%.o: %.c  $(HEADER)
	$(CC) $(FLAGS) -I. -c $< -o $@

all: $(NAME)
	
$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)
	
clean:
	$(RM) $(OBJS)
	
fclean: clean	
	$(RM) $(NAME)

re: fclean all

.PHONY: re clean fclean all