# -*- MakeFile -*-

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
BNS = checker

SRC = push_swap.c sortsmall.c sortfunctions.c retate2.c sorting2.c ft_atoi.c ft_split.c ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c parsing.c push.c retate.c sorting.c swap.c tools.c 

OBJ = $(SRC:%.c=%.o)

B_SRC = checker.c sortsmall.c sortfunctions.c retate2.c sorting2.c ft_atoi.c ft_split.c ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c parsing.c push.c retate.c sorting.c swap.c tools.c ./gnl/get_next_line.c ./gnl/get_next_line_utils.c

B_OBJ = $(B_SRC:%.c=%.o)

all : $(NAME) 

$(NAME) : $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

bonus :$(NAME) $(B_OBJ)
	$(CC) $(B_OBJ) -o $(BNS)

%.o : %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -f $(OBJ) $(B_OBJ)

fclean : clean
	rm -f $(NAME) $(BNS)

re : fclean all
