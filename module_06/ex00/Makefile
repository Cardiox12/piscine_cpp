# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/03 00:06:50 by bbellavi          #+#    #+#              #
#    Updated: 2021/06/03 00:29:42 by bbellavi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX			= g++
CXX_FLAGS	= -Wall -Werror -Wextra
SRCS		=	main.cpp \
				cast.cpp

HEADERS		= .
NAME		= cast

.PHONY: all re clean fclean

all: $(NAME)

$(NAME):
	$(CXX) $(CXX_FLAGS) -o $(NAME) $(SRCS) -I$(HEADERS)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all