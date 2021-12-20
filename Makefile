NAME = push_swap

C_NAME = checker

SRCS = utils/check.c utils/get.c \
	   utils/op_1.c utils/op_2.c \
	   utils/op_3.c utils/t_list.c \
	   utils/utils.c srcs/init.c \
	   srcs/radix_sort.c srcs/main.c srcs/short.c \

CHECKER = utils/check.c utils/get.c \
	   	  utils/op_1.c utils/op_2.c \
	   	  utils/op_3.c utils/t_list.c \
	   	  utils/utils.c srcs/init.c bonus_checker/bonus_utils.c bonus_checker/bonus_main.c \


CC = gcc

FLAGS = -Wall -Werror -Wextra  -g # -g

RM = rm -rf

HEADER = ./includes/push_swap.h

MAKE = make

all: $(NAME)

$(NAME):
		@${MAKE} -C ./libft
		@${MAKE} -C ./ft_printf
		@${CC} ${FLAGS} $(SRCS) ./libft/libft.a ./ft_printf/libftprintf.a -o ${NAME} 
		@echo "\033[92mPUSH_SWAP IS READY\033[0m"
		@${CC} ${FLAGS} $(CHECKER) ./libft/libft.a ./ft_printf/libftprintf.a -o ${C_NAME}
		@echo "\033[92mAND CHECKER IS READY\033[0m"
		
		

clean:
	@${MAKE} -C ./libft fclean
	@${MAKE} -C ./ft_printf fclean

fclean: clean
	@${RM} ${NAME}
	@echo "\033[32mPUSH SWAP IS DELETED *-_-*\033[0m"
	@${RM} ${C_NAME}
	@echo "\033[32mCHECKER IS DELETED *-_-*\033[0m"

re: fclean all

.PHONY: all clean fclean re
