/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:43:04 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/06 06:12:01 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void errormsg(void)
{
    char *str;

    str = "Error\n";
    while(*str)
    {
        write(2, str, 1);
        str++;
    }
}

int main(int argc, char **argv)
{
    t_list *stack;
    t_list *stackb;
    
    if(checklist(argc, argv, &stack))
    {
        if (checklist(argc, argv, &stack) == 2)
            return (0);
        else
        {
            errormsg();
            exit(EXIT_FAILURE);
        }
    }
    if(is_sorted(stack) == 0)
    {
        ft_lstclear(&stack, free);
        exit(EXIT_FAILURE);
    }
    if(ft_lstsize(stack) == 3)
        return (sort3(&stack), 0);
    indexed(stack);
    sorting(&stack, &stackb);
    sorting2(&stack, &stackb);
}