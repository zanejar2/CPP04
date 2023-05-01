# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zanejar <zanejar@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/28 01:44:24 by zanejar           #+#    #+#              #
#    Updated: 2023/05/01 01:17:17 by zanejar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SOURCE =  Animal.cpp main.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
RM = rm -rf
OBJ = $(SOURCE:.cpp=.o)
HEADER = Animal.hpp Dog.cpp Cat.hpp WrongAnimal.hpp WrongCat.hpp

all: 		$(NAME)

$(NAME):	$(OBJ) $(HEADER)
			$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re