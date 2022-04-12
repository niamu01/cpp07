# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/12 12:56:41 by yeju              #+#    #+#              #
#    Updated: 2022/04/12 13:02:37 by yeju             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
C98 = -std=c++98
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean all

$(NAME) : $(SRCS)
		$(CXX) $(CXXFLAGS) $(C98) -c $(SRCS)
		$(CXX) $(CXXFLAGS) $(C98) $(OBJS) -o $(NAME)

.PHONY : all clean fclean re