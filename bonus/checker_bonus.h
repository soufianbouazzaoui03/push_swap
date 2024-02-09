/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 05:15:32 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/09 05:46:39 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>
# include <string.h>
# include <limits.h>

typedef struct list
{
	int			content;
	int			index;
	struct list	*next;
}	t_list;

int		ft_atoi(const char *str);
char	**ft_split(const char *s, char c);
void	ft_putstr(const char *str);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);

int		implement(t_list **stack, int num);
int		checknum(char *num);
int		checklist(int argc, char **argv, t_list **stack);
int		is_sorted(t_list *stacka);

void	swap(t_list **stack);
void	swapb(t_list **stack);
void	ss(t_list **stack1, t_list **stack2);

void	retate(t_list **stack);
void	rev(t_list **stack);
void	reva(t_list **stack);
void	rrev(t_list **stack1, t_list **stack2);
void	rr(t_list **stack1, t_list **stack2);

void	pusha(t_list **stack1, t_list **stack2);
void	pushb(t_list **stack1, t_list **stack2);

#endif