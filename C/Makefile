# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thifranc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/04 19:24:34 by thifranc          #+#    #+#              #
#    Updated: 2017/09/13 17:25:54 by thifranc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror

all:
	gcc $(FLAGS) -o Colleen Colleen.c
	gcc $(FLAGS) -o Grace Grace.c
	gcc $(FLAGS) -o Sully Sully.c

fclean: clean
	@$(RM) Colleen Grace Sully
	@echo "erasing ..."

re: fclean all
	@echo "fclean + all"

.PHONY: all clean fclean re
