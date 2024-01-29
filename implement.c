/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   implement.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:45:52 by soel-bou          #+#    #+#             */
/*   Updated: 2024/01/29 15:45:57 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int   implement(t_list **stack, int num)
{
    t_list *new;
    t_list *tmp;

    tmp = *stack;
    while(tmp)
    {
        if(tmp->content == num)
        {
            ft_lstclear(stack, free);
            return (1);
        }
        tmp = tmp->next;
    }
    new = ft_lstnew(num);
    ft_lstadd_back(stack, new);
    return (0);
}

// int main()
// {
//     t_list *stack = ft_lstnew(5);
//     ft_lstadd_back(&stack, ft_lstnew(10));
//     ft_lstadd_back(&stack, ft_lstnew(11));
//     ft_lstadd_back(&stack, ft_lstnew(12));
//     printf("%d", implement(&stack, 10));
//     while(stack)
//     {
//         printf("%d\n", stack->content);
//         stack = stack->next;
//     }
// }