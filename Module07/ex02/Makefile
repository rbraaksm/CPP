# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: renebraaksma <renebraaksma@student.42.f      +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/02 12:38:19 by timvancitte   #+#    #+#                  #
#    Updated: 2021/03/31 17:57:03 by rbraaksm      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = array

SRCS = main.cpp

FLAGS = -Wall -Wextra -Werror

CMPL = clang++

all: $(NAME)

$(NAME):
	@echo Compiling: $(SRCS)
	@$(CMPL) $(FLAGS) -o $(NAME) $(SRCS)
	@echo Compiled $(NAME) Succesfully

clean:
	@rm -f $(NAME)
	@echo Removed Executables: $(NAME)

fclean: clean

re: fclean all