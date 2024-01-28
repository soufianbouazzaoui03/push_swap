/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 23:30:59 by soel-bou          #+#    #+#             */
/*   Updated: 2024/01/25 14:07:45 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(t_list **stack1, t_list **stack2)
{
    t_list *push;
    
    if(!stack1 || !stack2 || !*stack1 || !*stack2 || ft_lstsize(*stack2) <= 1)
        return ;
    push = *stack1;
    *stack1 = (*stack1)->next;
    ft_lstadd_front(stack2, push);
}
