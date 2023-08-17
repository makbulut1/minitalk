_END		=	\e[0m
_BOLD		=	\e[1m
_UNDER		=	\e[4m
_REV		=	\e[7m
_GREY		=	\e[30m
_RED		=	\e[31m
_GREEN		=	\e[32m
_YELLOW		=	\e[33m
_BLUE		=	\e[34m
_PURPLE		=	\e[35m
_CYAN		=	\e[36m
_WHITE		=	\e[37m
_IGREY		=	\e[40m
_IRED		=	\e[41m
_IGREEN		=	\e[42m
_IYELLOW	=	\e[43m
_IBLUE		=	\e[44m
_IPURPLE	=	\e[45m
_ICYAN		=	\e[46m
_IWHITE		=	\e[47m

MANDATORY = $(CLIENT) \
			$(SERVER)

BONUS = $(SERVER_BONUS) \
		$(CLIENT_BONUS)

CLIENT = client
SERVER = server

CLIENT_BONUS = client_bonus
SERVER_BONUS = server_bonus


all : $(MANDATORY)

$(MANDATORY) :
	@printf	"\033[2K\r$(_BLUE)$(_BOLD)$(MANDATORY) $(_END)\n"
	@make -C mandatory
	@mv mandatory/$(SERVER) .
	@mv mandatory/$(CLIENT) .

bonus :
	@printf	"\033[2K\r$(_BLUE)$(_BOLD)$(BONUS) $(_END)\n"
	@make -C bonus
	@mv bonus/$(CLIENT_BONUS) .
	@mv bonus/$(SERVER_BONUS) .

clean :
	@printf	"\033[2K\r$(_BLUE)$(_BOLD)$(MANDATORY) $(_END)\n"
	@make clean -C mandatory
	@printf	"\033[2K\r$(_BLUE)$(_BOLD)$(BONUS) $(_END)\n"
	@make clean -C bonus
	
fclean :
	@printf	"\033[2K\r$(_BLUE)$(_BOLD)$(MANDATORY) $(_END)\n"
	@make fclean -C mandatory
	@rm -rf $(MANDATORY)
	@printf	"\033[2K\r$(_BLUE)$(_BOLD)$(BONUS) $(_END)\n"
	@make fclean -C bonus
	@rm -rf $(BONUS)
	
re : fclean all

.PHONY : all clean fclean re bonus