/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 03:38:24 by soel-bou          #+#    #+#             */
/*   Updated: 2024/01/31 23:00:01 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

typedef struct list
{
    int         content;
    int         index;
    struct list *next;
}t_list;

int implement(t_list **stack, int num);
int is_sorted(t_list *stack);
void    indexed(t_list *stack);

char	**ft_split(const char *s, char c);
int	ft_atoi(const char *str);

t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));


void    retate(t_list **stack);
void    rev(t_list **stack);
void    push(t_list **stack1, t_list **stack2);
void    swap(t_list **stack);
void    ss(t_list **stack1, t_list **stack2);