/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortsmall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 04:19:42 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/07 03:34:19 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort3(t_list **stacka)
{
	int	first;
	int	second;
	int	therd;

	first = (*stacka)->content;
	second = (*stacka)->next->content;
	therd = (*stacka)->next->next->content;
	if (first > second && second < therd && first < therd)
		swap(stacka);
	else if (first > second && second < therd && first > therd)
		retatea(stacka);
	else if (first < second && second > therd && first > therd)
		reva(stacka);
	else if (first > second && second > therd && first > therd)
	{
		swap(stacka);
		reva(stacka);
	}
	else if (first < second && second > therd && first < therd)
	{
		swap(stacka);
		retatea(stacka);
	}
}

static int	ft_smallmove(t_list *stacka)
{
	t_list	*tmp;
	int		i;

	tmp = stacka;
	i = 0;
	while (tmp)
	{
		if (tmp->index == 0)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}

void	sort4(t_list **stacka, t_list **stackb)
{
	int	smallmoves;

	indexed(*stacka);
	smallmoves = ft_smallmove(*stacka);
	if (smallmoves >= 2)
	{
		smallmoves = 4 - smallmoves;
		while (smallmoves--)
			reva(stacka);
		pushb(stacka, stackb);
	}
	else
	{
		smallmoves = ft_smallmove(*stacka);
		while (smallmoves--)
			retatea(stacka);
		pushb(stacka, stackb);
	}
	sort3(stacka);
	pusha(stackb, stacka);
}

void	sort5(t_list **stacka, t_list **stackb)
{
	int	smallmoves;

	indexed(*stacka);
	smallmoves = ft_smallmove(*stacka);
	if (smallmoves > 2)
	{
		smallmoves = 5 - smallmoves;
		while (smallmoves--)
			reva(stacka);
		pushb(stacka, stackb);
	}
	else
	{
		smallmoves = ft_smallmove(*stacka);
		while (smallmoves--)
			retatea(stacka);
		pushb(stacka, stackb);
	}
	sort4(stacka, stackb);
	pusha(stackb, stacka);
}
