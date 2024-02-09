/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retate2_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 04:16:15 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/09 07:54:28 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	rrev(t_list **stack1, t_list **stack2)
{
	rev(stack1);
	rev(stack2);
}

void	rr(t_list **stack1, t_list **stack2)
{
	retate(stack1);
	retate(stack2);
}
