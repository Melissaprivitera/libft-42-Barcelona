# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 19:00:57 by melprivi          #+#    #+#              #
#    Updated: 2023/05/03 18:22:55 by melprivi         ###   ########.fr        #
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

SRC_B:= ft_lstnew ft_lstadd_front ft_lstsize \
		ft_lstlast ft_lstadd_back

SRCB:= $(addsuffix .c, $(SRC_B))
OBJSB:= $(addsuffix .o, $(SRC_B))

FLAGS:= -Wall -Wextra -Werror
CC:= gcc
HEADER:= libft.h
RM:= rm -f



# ********************************* RULES ************************************ #

%.o: %.c  $(HEADER) $(OBJS) $(OBJSB)
	$(CC) $(FLAGS) -I. -c $< -o $@

all: $(NAME)

bonus: $(OBJS) $(OBJSB)
	ar rcs $(NAME) $(OBJS) $(OBJSB)
	
$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)

clean:
	$(RM) $(OBJS) $(RM) $(OBJSB)
	
fclean: clean	
	$(RM) $(NAME)

re: fclean all

.PHONY: re clean fclean all bonus