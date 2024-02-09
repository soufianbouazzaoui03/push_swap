/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retate2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 04:16:15 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/08 22:22:45 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrev(t_list **stack1, t_list **stack2)
{
	rev(stack1);
	rev(stack2);
	write(1, "rrr\n", 4);
}

void	rr(t_list **stack1, t_list **stack2)
{
	retate(stack1);
	retate(stack2);
	// printf("rr\n");
	write(1, "rr\n", 3);
}
