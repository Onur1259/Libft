# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oozturk <oozturk@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 17:41:20 by oozturk           #+#    #+#              #
#    Updated: 2022/02/22 12:27:49 by oozturk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS		= $(shell find . -type f ! -name "ft_lst*.c" -name "ft_*.c")

BNS_SRCS	= ft_lst*.c

OBJS		= $(SRCS:.c=.o)

BNS_OBJS	= $(BNS_SRCS:.c=.o)

FLAGS		= -Wall -Werror -Wextra -c

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)

bonus: $(NAME)
	gcc $(FLAGS) $(BNS_SRCS)
	ar rc $(NAME) $(BNS_OBJS)

clean:
	rm -f $(OBJS) $(BNS_OBJS)
	
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY = all clean fclean re bonus
