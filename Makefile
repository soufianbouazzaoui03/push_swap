# -*- MakeFile -*-

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
B_NAME = checker

SRC = push_swap.c sortsmall.c sortfunctions.c retate2.c sorting2.c ft_atoi.c ft_split.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstlast.c ft_lstnew.c ft_lstsize.c parsing.c push.c retate.c sorting.c swap.c tools.c 

OBJ = $(SRC:%.c=%.o)

B_SRC = ./bonus/checker_bonus.c ./bonus/retate2_bonus.c ./bonus/ft_atoi_bonus.c ./bonus/ft_split_bonus.c ./bonus/ft_lstadd_back_bonus.c ./bonus/ft_lstadd_front_bonus.c ./bonus/ft_lstclear_bonus.c ./bonus/ft_lstdelone_bonus.c ./bonus/ft_lstlast_bonus.c ./bonus/ft_lstnew_bonus.c ./bonus/ft_lstsize_bonus.c ./bonus/parsing_bonus.c ./bonus/push_bonus.c ./bonus/retate_bonus.c ./bonus/swap_bonus.c ./bonus/tools_bonus.c ./gnl/get_next_line.c ./gnl/get_next_line_utils.c

B_OBJ = $(B_SRC:%.c=%.o)

all : $(NAME) 

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

bonus :$(B_NAME)

$(B_NAME) : $(B_OBJ)
	$(CC) $(CFLAGS) $(B_OBJ) -o $(B_NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -f $(OBJ) $(B_OBJ)

fclean : clean
	rm -f $(NAME) $(B_NAME)

re : fclean all

.PHONY : all bonus clean fclean re