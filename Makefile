# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 19:00:57 by melprivi          #+#    #+#              #
#    Updated: 2023/01/18 19:13:35 by melprivi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= libft.a
SRC:= 	testfunctions.c \
		ft_isalpha.c \
		ft_isdigit.c

FLAGS:= -Wall -Wextra -Werror
RM:= rm -f

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRC)

clean:
	$(RM) *.o
	
fclean: clean	
	$(RM) $(NAME)

re: fclean all

.PHONY: re clean fclean all