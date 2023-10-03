# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmustone <vmustone@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 21:24:20 by vmustone          #+#    #+#              #
#    Updated: 2023/10/03 21:24:39 by vmustone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = zombie

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