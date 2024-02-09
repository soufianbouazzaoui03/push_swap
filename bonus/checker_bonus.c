/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 23:12:49 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/09 07:53:34 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"
#include "../gnl/get_next_line.h"

int	checker(char *instra, t_list **stacka, t_list **stackb)
{
	if (strcmp(instra, "sa\n") == 0)
		swap(stacka);
	else if (strcmp(instra, "sb\n") == 0)
		swapb(stackb);
	else if (strcmp(instra, "pa\n") == 0)
		pusha(stackb, stacka);
	else if (strcmp(instra, "pb\n") == 0)
		pushb(stacka, stackb);
	else if (strcmp(instra, "ra\n") == 0)
		retate(stacka);
	else if (strcmp(instra, "rb\n") == 0)
		retate(stackb);
	else if (strcmp(instra, "rra\n") == 0)
		reva(stacka);
	else if (strcmp(instra, "rrb\n") == 0)
		rev(stackb);
	else if (strcmp(instra, "rrr\n") == 0)
		rrev(stacka, stackb);
	else if (strcmp(instra, "rr\n") == 0)
		rr(stacka, stackb);
	else
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	*stacka;
	t_list	*stackb;
	char	*instra;	

	if (checklist(argc, argv, &stacka))
		return (ft_lstclear(&stacka, free), write(1, "Error\n", 6), 0);
	if (is_sorted(stacka) == 0)
		return (ft_lstclear(&stacka, free), write(1, "OK", 2), 0);
	while (1)
	{
		instra = get_next_line(0);
		if (!instra)
			break ;
		if (checker(instra, &stacka, &stackb) == 1)
			return (ft_lstclear(&stacka, free), write(1, "Error\n", 6), 0);
		free(instra);
	}
	if (is_sorted(stacka) == 0)
		write(1, "OK", 2);
	else
		write(1, "KO", 2);
	return (ft_lstclear(&stacka, free), ft_lstclear(&stackb, free), 0);
}
