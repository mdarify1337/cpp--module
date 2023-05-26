# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/18 00:30:30 by mdarify           #+#    #+#              #
#    Updated: 2023/04/18 00:33:58 by mdarify          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC :=  BitcoinExchange.cpp main.cpp
NAME := btc
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