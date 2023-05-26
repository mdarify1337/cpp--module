# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/16 17:21:34 by mdarify           #+#    #+#              #
#    Updated: 2023/04/16 17:59:04 by mdarify          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC := main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
NAME := animal
STANDARD := -std=c++98
CXXFLAGS := -Wall -Wextra -Werror
OBJECT_FILES := $(SRC:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJECT_FILES)
	$(CXX) $(OBJECT_FILES) -o $(NAME)
%.o : %.cpp
	$(CXX) $(CXXFLAGS) $(STANDARD) -c $^
clean:
	$(RM) $(OBJECT_FILES)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.PHONY : clean fclean re