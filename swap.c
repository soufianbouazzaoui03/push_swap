/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 03:46:19 by soel-bou          #+#    #+#             */
/*   Updated: 2024/01/25 14:17:15 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap(t_list **stack)
{
    int tmp;

    if(!stack || !*stack || ft_lstsize(*stack) <= 1)
        return ;
    tmp = (*stack)->content;
    (*stack)->content = (*stack)->next->content;
    (*stack)->next->content = tmp;
}


void    ss(t_list **stack1, t_list **stack2)
{
    if(!stack1 || !stack2 || !*stack1 || !*stack2 || ft_lstsize(*stack1) <= 1 || ft_lstsize(*stack2) <= 1)
        return ;
    swap(stack1);
    swap(stack2);
}