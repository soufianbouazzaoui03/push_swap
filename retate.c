/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:56:42 by soel-bou          #+#    #+#             */
/*   Updated: 2024/01/25 13:01:19 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    retate(t_list **stack)
{
    t_list  *tmp;

    if(!stack)
        return ;
    tmp = *stack;
    *stack = (*stack)->next;
    tmp->next = NULL;
    ft_lstadd_back(stack, tmp);
}

void    rr(t_list *stack1, t_list *stack2)
{
    retate(&stack1);
    retate(&stack2);
}

void rev(t_list **stack) {
    t_list *last;
    t_list *tmp;

    if (!stack || !(*stack))
        return;
    last = *stack;
    while(last->next)
    {
        tmp = last;
        last = last->next;
    }
    tmp->next = NULL;
    last->next = *stack;
    *stack = last;
}


void    rrev(t_list *stack1, t_list *stack2)
{
    rev(&stack1);
    rev(&stack2);
}