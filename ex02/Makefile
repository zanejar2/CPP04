# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 01:44:24 by zanejar           #+#    #+#              #
#    Updated: 2023/05/01 01:59:03 by zanejar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = AAnimal
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE =  Animal.cpp main.cpp Dog.cpp Cat.cpp Brain.cpp
RM = rm -rf
OBJ = $(SOURCE:.cpp=.o)
HEADER = Animal.hpp Dog.cpp Cat.hpp Brain.hpp

all: 		$(NAME)

$(NAME):	$(OBJ) $(HEADER)
			$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re