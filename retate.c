/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:56:42 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/07 04:17:34 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	retateb(t_list **stack)
{
	t_list	*tmp;

	if (!stack)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack, tmp);
	printf("rb\n");
}

void	retatea(t_list **stack)
{
	t_list	*tmp;

	if (!stack)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack, tmp);
	printf("ra\n");
}

void	retate(t_list **stack)
{
	t_list	*tmp;

	if (!stack)
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
	printf("rrb\n");
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
	printf("rra\n");
}
