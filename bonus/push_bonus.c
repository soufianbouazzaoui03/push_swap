/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 23:30:59 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/09 07:55:01 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	pusha(t_list **stack1, t_list **stack2)
{
	t_list	*push;

	if (!stack1 || !*stack1)
		return ;
	push = *stack1;
	*stack1 = (*stack1)->next;
	ft_lstadd_front(stack2, push);
}

void	pushb(t_list **stack1, t_list **stack2)
{
	t_list	*push;

	if (!stack1 || !*stack1)
		return ;
	push = *stack1;
	*stack1 = (*stack1)->next;
	ft_lstadd_front(stack2, push);
}
