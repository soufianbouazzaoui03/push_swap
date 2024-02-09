/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retate_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 00:56:42 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/09 07:54:22 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	retateb(t_list **stack)
{
	t_list	*tmp;

	if (!stack || !*stack)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
	ft_lstadd_back(stack, tmp);
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
}
