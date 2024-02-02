/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:36:31 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/01 23:23:37 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(t_list *stack)
{
    while(stack && stack->next)
    {
        if(stack->content >= stack->next->content)
            return (1);
        stack = stack->next;
    }
    return (0);
}

void    indexed(t_list *stack)
{
    t_list  *tmp;
    t_list  *head;
    t_list  *cpy;

    head = stack;
    cpy = stack;
    while(cpy)
    {
        tmp = head;
        while(tmp)
        {
            if (cpy->content > tmp->content)
                cpy->index++;
            tmp = tmp->next;
        }
        cpy = cpy->next;
    }
}
int   implement(t_list **stack, int num)
{
    t_list *new;
    t_list *tmp;

    tmp = *stack;
    while(tmp)
    {
        if(tmp->content == num)
        {
            ft_lstclear(stack, free);
            return (1);
        }
        tmp = tmp->next;
    }
    new = ft_lstnew(num);
    ft_lstadd_back(stack, new);
    return (0);
}

