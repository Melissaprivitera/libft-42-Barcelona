# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melprivi <melprivi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/12 19:00:57 by melprivi          #+#    #+#              #
#    Updated: 2023/01/19 21:51:19 by melprivi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= libft.a
SRC_F:= ft_isalpha ft_isdigit ft_isalnum

FLAGS:= -Wall -Wextra -Werror
RM:= rm -f
SRC:= $(addsuffix .c, $(SRC_F))
OBJS:= $(addsuffix .o, $(SRC_F))

all: $(NAME)
	
$(NAME): $(OBJS)
	gcc $(FLAGS) $(OBJS) -o $(NAME)
	
clean:
	$(RM) $(OBJS)
	
fclean: clean	
	$(RM) $(NAME)

re: fclean all

.PHONY: re clean fclean all