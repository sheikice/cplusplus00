# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwuille <jwuille@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/30 17:58:14 by jwuille           #+#    #+#              #
#    Updated: 2025/09/11 16:14:10 by jwuille          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ_DIR = obj

SRC =	main.cpp \
		PhoneBook.cpp \
		Contact.cpp

CC = c++ -MD -std=c++98
CFLAGS = -Wall -Werror -Wextra -g3
NAME = PhoneBook

OBJ = $(addprefix $(OBJ_DIR)/,$(SRC:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# ================== SRC =============================
$(OBJ_DIR)/%.o: %.cpp | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean_obj:
	@rm -rf $(OBJ_DIR)

clean:
	rm -f $(OBJ)
	@rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)
	@rm -f compile_commands.json
 
re: fclean all

-include $(OBJ_DIR)/*.d

.PHONY: all clean fclean re bonus 
