/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:27:11 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/06 02:26:53 by soel-bou         ###   ########.fr       */
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
        firstpush(rule, chunk, stacka, stackb);
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
    return 0;
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
    t_list  *maxNode;
    int     i;
    
    i = 0;
    maxNode = findmax(stack);
    while (stack)
    {
        if (stack->content == maxNode->content)
            return i;
        i++;
        stack = stack->next;
    }
    return -1;
}

int ft_bestmove2(t_list *stack)
{
    t_list  *secondNode;
    int     i;
    
    i = 0;
    secondNode = find2nd(stack);
    while (stack)
    {
        if (stack->content == secondNode->content)
            return i;
        i++;
        stack = stack->next;
    }
    return -1;
}
t_list *find2nd(t_list *stack)
{
    t_list *max;
    t_list *second;
    t_list *cpy;

    max = findmax(stack);
    second = ft_lstnew(INT_MIN);
    cpy = stack;
    while(cpy)
    {
        if(cpy->content > second->content && cpy->content != max->content)
            second = cpy;
        cpy = cpy->next;
    }
    return (second);
}


void sorting2(t_list **stacka, t_list **stackb)
{
    int bestmove;
    int bestmove2;
    int ref;

    ref = ft_lstsize(*stackb) / 2;
    while((*stackb))
    {
        ref = ft_lstsize(*stackb) / 2;
        bestmove = ft_bestmove((*stackb));
        bestmove2 = ft_bestmove2((*stackb));
        if (bestmove2 < bestmove && bestmove < ref)
            bestmovesort2(bestmove, bestmove2, stacka, stackb);
        else if (bestmove < ref)
            bestmovesort(bestmove, stacka, stackb);
        else
        {
            bestmove = ft_lstsize(*stackb) - bestmove;
            bestmove2 = ft_lstsize(*stackb) - bestmove2;
            if (bestmove2 < bestmove)
                rev_bestmovesort2(bestmove, bestmove2, stacka, stackb);
            else
                rev_bestmovesort(bestmove, stacka, stackb);
        }
    }
}
