/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:36:31 by soel-bou          #+#    #+#             */
/*   Updated: 2024/01/31 23:15:29 by soel-bou         ###   ########.fr       */
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

    head = stack;
    while(stack)
    {
        tmp = head;
        while(tmp)
        {
            if (stack->content > tmp->content)
                stack->index++;
            tmp = tmp->next;
        }
        stack = stack->next;
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

int main()
{
    t_list *stack = ft_lstnew(5);
    ft_lstadd_back(&stack, ft_lstnew(10));
    ft_lstadd_back(&stack, ft_lstnew(-10));
    ft_lstadd_back(&stack, ft_lstnew(12));
    indexed(stack);
    while(stack)
    {
        printf("%d\n", stack->index);
        stack = stack->next;
    }
}