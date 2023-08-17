SERVER			=	server_bonus
SERVER_SRC		=	server_bonus.c

CLIENT			=	client_bonus
CLIENT_SRC		=	client_bonus.c 

UTILS_SRC		=	minitalk_utils_bonus.c 

CC			=	@gcc
RM 			=	@rm -f
FLAGS			= 	-Wall -Werror -Wextra

all : $(SERVER) $(CLIENT)

$(SERVER) : $(SERVER_OBJ) $(UTILS_OBJ)
	$(CC) $(FLAGS) $(SERVER_SRC) $(UTILS_SRC) -o $(SERVER)

$(CLIENT) : $(CLIENT_OBJ) $(UTILS_OBJ)
	$(CC) $(FLAGS) $(CLIENT_SRC) $(UTILS_SRC) -o $(CLIENT)

fclean : clean

clean :
	@rm -rf $(SERVER) $(CLIENT)

re : fclean all

.PHONY: all fclean re
