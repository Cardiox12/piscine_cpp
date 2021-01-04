# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/03 22:24:22 by bbellavi          #+#    #+#              #
#    Updated: 2021/01/04 14:29:30 by bbellavi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= g++

INC_DIR		= srcs
SRC_DIR		= srcs

INC_SRC		= $(INC_DIR)/Replace.hpp

SRCS		= main.cpp
SRCS		+= $(SRC_DIR)/Replace.cpp

NAME		= replace

all: $(NAME)

$(NAME): $(SRCS) $(INC_SRC)
	$(CC) -o $(NAME) $(SRCS) -I$(INC_DIR)

clean:
	rm -f *.replace

fclean: clean
	rm -f $(NAME)

re: fclean all
