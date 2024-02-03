/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:27:11 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/03 23:17:46 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sorting(t_list **stacka, t_list **stackb)
{
    int chunk;
    int ref;
    int rule;
    int fchunk;
    
    chunk = ft_lstsize(*stacka) / 5;
    if(ft_lstsize(*stacka) > 100)
         chunk = ft_lstsize(*stacka) / 9;
    ref = chunk/2;
    fchunk = chunk;
    while(*stacka)
    {
        rule = chunk - ref;
        if((*stacka)->index < chunk)
        {
            if((*stacka)->index >= rule)
            {
                pushb(stacka, stackb);
                if (*stacka && (*stacka)->index > chunk)
                    rr(stacka ,stackb);
                else
                    retateb(stackb);
            }
            else
                pushb(stacka, stackb);
        }
        else
            retatea(stacka);
        if(ft_lstsize(*stackb) == chunk)
            chunk += fchunk;
    }
}

int position(t_list *stack, int i)
{
    int     pos;
    t_list  *tmp;

    tmp = stack;
    pos = 0;
    while(tmp)
    {
        if(tmp->index == i)
            return (pos);
        pos++;
        tmp = tmp->next;
    }
    return (-1);
}

t_list *findmax(t_list *stack)
{
    t_list  *cpy;
    t_list  *max;

    cpy = stack;
    max = ft_lstnew(INT_MIN);
    while(cpy)
    {
        if(cpy->content > max->content)
            max = cpy;
        cpy = cpy->next;
    }
    return (max);
    
}

int ft_bestmove(t_list *stack)
{
    int i;

    i = 0;
    while(stack)
    {
        if(stack->content == findmax(stack)->content)
            return (i);
        i++;
        stack = stack->next;
    }
    return (-1);
}
void sorting2(t_list **stacka, t_list **stackb)
{
    int bestmove;
    int ref;

    bestmove = 0;
    int i = 0;
    ref = ft_lstsize(*stackb) / 2;
    while((*stackb))
    {
        ref = ft_lstsize(*stackb) / 2;
        bestmove = ft_bestmove((*stackb));
        if(bestmove < ref)
        {
            while(bestmove--)
                retateb(stackb);
            pusha(stackb, stacka);
        }
        else
        {
            bestmove = ft_lstsize(*stackb) - bestmove;
            while((bestmove--))
                rev(stackb);
            pusha(stackb, stacka);
        }
    }
}