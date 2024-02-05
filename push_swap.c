/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:43:04 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/05 03:00:39 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
    t_list *stack;
    t_list *stackb;
    t_list  *cpy;
    if(checklist(argc, argv, &stack))
            printf("error");
    if(is_sorted(stack) == 0)
        return(ft_lstclear(&stack, free), 0);
    cpy = stack;
    indexed(stack);
    sorting(&stack, &stackb);
    sorting2(&stack, &stackb);
    //printf("done");

}