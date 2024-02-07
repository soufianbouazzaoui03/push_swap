/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 17:36:31 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/07 03:30:25 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

int	is_sorted(t_list *stacka)
{
	t_list	*stack;

	stack = stacka;
	while (stack && stack->next)
	{
		if (stack->content >= stack->next->content)
			return (1);
		stack = stack->next;
	}
	return (0);
}

void	indexed(t_list *stack)
{
	t_list	*tmp;
	t_list	*head;
	t_list	*cpy;

	head = stack;
	cpy = stack;
	while (cpy)
	{
		cpy->index = 0;
		cpy = cpy->next;
	}
	cpy = stack;
	while (cpy)
	{
		tmp = head;
		while (tmp)
		{
			if (cpy->content > tmp->content)
				cpy->index++;
			tmp = tmp->next;
		}
		cpy = cpy->next;
	}
}

void	changeindex(t_list *stack)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = stack;
	while (tmp)
	{
		tmp->index = i++;
		tmp = tmp->next;
	}
}

int	implement(t_list **stack, int num)
{
	t_list	*new;
	t_list	*tmp;

	tmp = *stack;
	while (tmp)
	{
		if (tmp->content == num)
		{
			ft_lstclear(stack, free);
			return (1);
		}
		tmp = tmp->next;
	}
	new = ft_lstnew(num);
	if (!new)
		return (ft_lstclear(stack, free), 1);
	ft_lstadd_back(stack, new);
	return (0);
}
