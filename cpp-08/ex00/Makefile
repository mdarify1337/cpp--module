# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/17 23:29:06 by mdarify           #+#    #+#              #
#    Updated: 2023/04/17 23:30:51 by mdarify          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
NAME = Container
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS =  main.cpp

all : $(NAME)

OBJECT_FILE = $(SRCS:%.cpp=%.o)

$(NAME) : $(OBJECT_FILE) 
	$(CC) $(CPPFLAGS) $(OBJECT_FILE) -o $(NAME)
	
	@printf "\033[1;33m****Program compiled Succesfully ! ****\033[0m\n"

clean :
	@rm -rf *.o 
	@printf "\033[1;36mObject Files Deleted !\033[0m\n"

fclean : clean
	@rm  -rf $(NAME) 		
	@printf "\033[1;36mProgram Deleted !\033[0m\n"

re : fclean all