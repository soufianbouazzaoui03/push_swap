/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:27:11 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/02 02:52:46 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sorting(t_list **stacka, t_list **stackb)
{
    int chunk;
    int ref;
    int rule;
    int fchunk;
    int i;
    
    chunk = ft_lstsize(*stacka) / 5;
    printf("chunk = %d\n ", chunk);
    ref = chunk/2;
    fchunk = chunk;
    while(*stacka && i < 1000)
    {
        if(ft_lstsize(*stackb) == chunk)
            chunk += fchunk;
        rule = chunk - ref;
        if((*stacka)->index < chunk)
        {
            if((*stacka)->index < rule)
            {
                push(stacka, stackb);
                retate(stackb);
            }
            else
                push(stacka, stackb);
        }
        else
            retate(stacka);
        i++;
    }
}
