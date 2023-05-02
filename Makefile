# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 19:00:57 by melprivi          #+#    #+#              #
#    Updated: 2023/05/02 22:20:48 by melprivi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ****************************VARIABLE DECLARATION**************************** #

NAME:= libft.a
SRC_F:= ft_isalpha ft_isdigit ft_isalnum \
		ft_isascii ft_isprint ft_strlen \
		ft_memset ft_bzero ft_memcpy \
		ft_memmove ft_strlcpy ft_strlcat \
		ft_toupper ft_tolower ft_strchr \
		ft_strrchr ft_strncmp ft_memchr \
		ft_memcmp ft_strnstr ft_atoi \
		ft_calloc ft_strdup ft_substr \
		ft_strjoin ft_strtrim ft_split ft_itoa \
		ft_strmapi ft_striteri ft_putchar_fd \
		ft_putstr_fd ft_putendl_fd ft_putnbr_fd \

SRC:= $(addsuffix .c, $(SRC_F))
OBJS:= $(addsuffix .o, $(SRC_F))

SRC_B:= ft_lstnew ft_lstadd_front \

SRC2:= $(addsuffix .c, $(SRC_B))
OBJS2:= $(addsuffix .o, $(SRC_B))

FLAGS:= -Wall -Wextra -Werror
CC:= gcc
HEADER:= libft.h
RM:= rm -f



# ********************************* RULES ************************************ #

%.o: %.c  $(HEADER) $(OBJS) $(OBJS2)
	$(CC) $(FLAGS) -I. -c $< -o $@

bonus: $(OBJS) $(OBJS2)
	ar rcs $(NAME) $(OBJS) $(OBJS2)

all: $(NAME)
	
$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)

clean:
	$(RM) $(OBJS) $(RM) $(OBJS2)
	
fclean: clean	
	$(RM) $(NAME)

re: fclean all

.PHONY: re clean fclean all bonus