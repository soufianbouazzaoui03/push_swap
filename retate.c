/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:56:42 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/09 00:14:03 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	retateb(t_list **stack)
{
	t_list	*tmp;

	if (!stack || !*stack)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack, tmp);
	write(1, "rb\n", 3);
}

void	retatea(t_list **stack)
{
	t_list	*tmp;

	if (!stack || !*stack)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack, tmp);
	write(1, "ra\n", 3);
}

void	retate(t_list **stack)
{
	t_list	*tmp;

	if (!stack || !*stack)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack, tmp);
}

void	rev(t_list **stack)
{
	t_list	*last;
	t_list	*tmp;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	last = *stack;
	tmp = NULL;
	while (last->next)
	{
		tmp = last;
		last = last->next;
	}
	tmp->next = NULL;
	last->next = *stack;
	*stack = last;
	write(1, "rrb\n", 4);
}

void	reva(t_list **stack)
{
	t_list	*last;
	t_list	*tmp;

	if (!stack || !(*stack) || !(*stack)->next)
		return ;
	last = *stack;
	tmp = NULL;
	while (last->next)
	{
		tmp = last;
		last = last->next;
	}
	tmp->next = NULL;
	last->next = *stack;
	*stack = last;
	write(1, "rra\n", 4);
}
