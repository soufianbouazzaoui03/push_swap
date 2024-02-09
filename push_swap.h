/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 03:38:24 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/08 23:16:05 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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

int		implement(t_list **stack, int num);
int		is_sorted(t_list *stacka);
t_list	*findmax(t_list *stack);
void	indexed(t_list *stack);
void	changeindex(t_list *stack);
void	sorting(t_list **stacka, t_list **stackb);
void	sortback(t_list **stacka, t_list **stackb);
int		ft_bestmove(t_list *stack);
void	sorting2(t_list **stacka, t_list **stackb);
int		checklist(int argc, char **argv, t_list **stack);
int		checknum(char *num);

char	**ft_split(const char *s, char c);
int		ft_atoi(const char *str);
void	ft_putstr(const char *str);

t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));

void	retatea(t_list **stack);
void	retateb(t_list **stack);
void	retate(t_list **stack);
void	rrev(t_list **stack1, t_list **stack2);
void	rr(t_list **stack1, t_list **stack2);
void	rev(t_list **stack);
void	reva(t_list **stack);
void	pushb(t_list **stack1, t_list **stack2);
void	pusha(t_list **stack1, t_list **stack2);
void	swap(t_list **stack);
void	swapb(t_list **stack);
void	ss(t_list **stack1, t_list **stack2);

t_list	*find2nd(t_list *stack);
int		ft_bestmove2(t_list *stack);
void	bestmovesort(int bestmove, t_list **stacka, t_list **stackb);
void	bestmovesort2(int bestmove, int bestmove2,
			t_list **stacka, t_list **stackb);
void	rev_bestmovesort2(int bestmove, int bestmove2,
			t_list **stacka, t_list **stackb);
void	rev_bestmovesort(int bestmove, t_list **stacka, t_list **stackb);
void	firstpush(int rule, int chunk, t_list **stacka, t_list **stackb);

void	sort3(t_list **stacka);
void	sort4(t_list **stacka, t_list **stackb);
void	sort5(t_list **stacka, t_list **stackb);

#endif