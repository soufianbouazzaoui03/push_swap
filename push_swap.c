/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:43:04 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/08 22:54:00 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	errormsg(void)
{
	char	*str;

	str = "Error\n";
	while (*str)
	{
		write(2, str, 1);
		str++;
	}
}

static int	sort(t_list **stacka, t_list **stackb)
{
	int	size;

	size = ft_lstsize(*stacka);
	if (size < 3)
		return (ft_lstclear(stacka, free), 0);
	else if (size == 3)
		return (sort3(stacka), ft_lstclear(stacka, free), 0);
	else if (size == 4)
		return (sort4(stacka, stackb), ft_lstclear(stacka, free), 0);
	else if (size == 5)
		return (sort5(stacka, stackb), ft_lstclear(stacka, free), 0);
	else
	{
		indexed(*stacka);
		sorting(stacka, stackb);
		sorting2(stacka, stackb);
		return (ft_lstclear(stacka, free), 0);
	}
}

int	main(int argc, char **argv)
{
	t_list	*stack;
	t_list	*stackb;

	if (checklist(argc, argv, &stack))
	{
		errormsg();
		exit(EXIT_FAILURE);
	}
	if (is_sorted(stack) == 0)
	{
		ft_lstclear(&stack, free);
		exit(EXIT_FAILURE);
	}
	return (sort(&stack, &stackb));
}
