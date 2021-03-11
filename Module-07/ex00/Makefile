# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: renebraaksma <renebraaksma@student.42.f      +#+                      #
#                                                    +#+                       #
#    Created: 2020/11/02 12:38:19 by timvancitte   #+#    #+#                  #
#    Updated: 2021/03/11 08:35:56 by rbraaksm      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

RD = "\x1b[31;01m"
GR = "\x1b[32;01m"
YL = "\x1b[33;01m"
BL = "\x1b[34;01m"
NO = "\x1b[0m"

NAME = swap

SRCS = main.cpp

FLAGS = -Wall -Wextra -Werror

CMPL = clang++

all: $(NAME)

$(NAME):
	@echo $(YL)Compiling: $(SRCS)$(NO)
	@$(CMPL) $(FLAGS) -o $(NAME) $(SRCS)
	@echo $(GR)Compiled $(NAME) Succesfully$(NO)

clean:
	@rm -f $(NAME)
	@echo $(RD)Removed Executables: $(NAME)$(NO)

fclean: clean

re: fclean all