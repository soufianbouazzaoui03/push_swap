/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 23:27:11 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/07 04:27:08 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting(t_list **stacka, t_list **stackb)
{
	int	chunk;
	int	ref;
	int	rule;
	int	fchunk;

	chunk = ft_lstsize(*stacka) / 5;
	if (ft_lstsize(*stacka) > 100)
		chunk = ft_lstsize(*stacka) / 9;
	ref = chunk / 2;
	fchunk = chunk;
	while (*stacka)
	{
		rule = chunk - ref;
		firstpush(rule, chunk, stacka, stackb);
		if (ft_lstsize(*stackb) == chunk)
			chunk += fchunk;
	}
}

int	ft_bestmove(t_list *stack)
{
	t_list	*maxnode;
	int		i;

	i = 0;
	maxnode = findmax(stack);
	while (stack)
	{
		if (stack->content == maxnode->content)
			return (i);
		i++;
		stack = stack->next;
	}
	return (-1);
}

int	ft_bestmove2(t_list *stack)
{
	t_list	*secondnode;
	int		i;

	i = 0;
	secondnode = find2nd(stack);
	while (stack)
	{
		if (stack->content == secondnode->content)
			return (i);
		i++;
		stack = stack->next;
	}
	return (-1);
}

void	sorting2(t_list **stacka, t_list **stackb)
{
	int	bestmove;
	int	bestmove2;
	int	ref;

	ref = ft_lstsize(*stackb) / 2;
	while ((*stackb))
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
