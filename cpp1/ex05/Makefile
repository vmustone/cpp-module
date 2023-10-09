# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: villemustonen <villemustonen@student.42    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/09 05:47:37 by villemuston       #+#    #+#              #
#    Updated: 2023/10/09 05:49:27 by villemuston      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = harl

Flags = -std=c++98 -Wall -Werror -Wextra

Src = main.cpp

Obj = $(Src:%.cpp=%.o)

all: $(Name)

$(Name): $(Src) $(Obj)
	c++ $(Flags) $(Obj) -o $(Name)

clean:
	rm -f $(Obj)

fclean: clean
	rm -f $(Name)

re: fclean all

.phony: all clean fclean re