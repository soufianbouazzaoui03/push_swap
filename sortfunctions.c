/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortfunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 02:12:38 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/07 03:44:13 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	bestmovesort(int bestmove, t_list **stacka, t_list **stackb)
{
	while ((bestmove--))
		retateb(stackb);
	pusha(stackb, stacka);
}

void	bestmovesort2(int bestmove, int bestmove2,
	t_list **stacka, t_list **stackb)
{
	while ((bestmove2--))
		retateb(stackb);
	pusha(stackb, stacka);
	bestmove = ft_bestmove((*stackb));
	while (bestmove--)
		retateb(stackb);
	pusha(stackb, stacka);
	swap(stacka);
}

void	rev_bestmovesort2(int bestmove, int bestmove2,
	t_list **stacka, t_list **stackb)
{
	while ((bestmove2--) && bestmove--)
		rev(stackb);
	pusha(stackb, stacka);
	while ((bestmove--))
		rev(stackb);
	pusha(stackb, stacka);
	swap(stacka);
}

void	rev_bestmovesort(int bestmove, t_list **stacka, t_list **stackb)
{
	while ((bestmove--))
		rev(stackb);
	pusha(stackb, stacka);
}

void	firstpush(int rule, int chunk, t_list **stacka, t_list **stackb)
{
	if ((*stacka)->index < chunk)
	{
		if ((*stacka)->index >= rule)
		{
			pushb(stacka, stackb);
			if (*stacka && (*stacka)->index > chunk)
				rr(stacka, stackb);
			else
				retateb(stackb);
		}
		else
			pushb(stacka, stackb);
	}
	else
		retatea(stacka);
}
