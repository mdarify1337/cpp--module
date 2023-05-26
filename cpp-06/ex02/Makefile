# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdarify <mdarify@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/17 16:02:21 by mdarify           #+#    #+#              #
#    Updated: 2023/04/17 17:27:55 by mdarify          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS =  -std=c++98 -Wall -Wextra -Werror
SRCS = main.cpp functions.cpp
OUT = out
OBJS = ${SRCS:.c=.o}

.c.o:
	${cc} ${FLAGS} -c $< -o ${<:.c=.o}

${OUT}: ${OBJS}
	${CC} ${FLAGS} ${OBJS} -o ${OUT}
all:
	${CC} ${FLAGS} ${OBJS} -o ${OUT}
clean:
	rm -rf ${OUT}
fclean : clean
re: fclean all