# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 13:00:49 by vmustone          #+#    #+#              #
#    Updated: 2023/09/25 12:41:21 by vmustone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MegaPhone

FLAGS = -std=c++98 -Wall -Werror -Wextra

SRC = MegaPhone.cpp

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	 c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.phony: all clean fclean re