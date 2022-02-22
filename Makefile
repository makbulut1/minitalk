cc = gcc

flags = -Wall -Wextra -Werror

client = $(cc) $(flags) client.c minitalk_utils.c -o client

server = $(cc) $(flags) server.c minitalk_utils.c -o server

all : 
	$(client)
	$(server)

re : fclean all

fclean : clean

clean : 
	rm -rf client
	rm -rf server

.PHONY : all re fclean clean 