/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 04:24:18 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/07 04:26:49 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*find2nd(t_list *stack)
{
	t_list	*max;
	t_list	*second;
	t_list	*cpy;

	max = findmax(stack);
	second = ft_lstnew(INT_MIN);
	cpy = stack;
	while (cpy)
	{
		if (cpy->content > second->content && cpy->content != max->content)
			second = cpy;
		cpy = cpy->next;
	}
	return (second);
}

t_list	*findmax(t_list *stack)
{
	t_list	*cpy;
	t_list	*max;

	cpy = stack;
	max = ft_lstnew(INT_MIN);
	while (cpy)
	{
		if (cpy->content > max->content)
			max = cpy;
		cpy = cpy->next;
	}
	return (max);
}
