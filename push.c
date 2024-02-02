/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 23:30:59 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/02 02:43:56 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push(t_list **stack1, t_list **stack2)
{
    t_list *push;
    
    push = *stack1;
    *stack1 = (*stack1)->next;
    ft_lstadd_front(stack2, push);
    printf("pb");
}
// int main()
// {
//     t_list *stack;
//     t_list *stackb;

//     stack = ft_lstnew(1);
//     ft_lstadd_back(&stack, ft_lstnew(10));
//     ft_lstadd_back(&stack, ft_lstnew(10));
//     ft_lstadd_back(&stack, ft_lstnew(10));
//     ft_lstadd_back(&stack, ft_lstnew(10));
//     ft_lstadd_back(&stack, ft_lstnew(10));
//     ft_lstadd_back(&stack, ft_lstnew(10));
//     ft_lstadd_back(&stack, ft_lstnew(10));
//     ft_lstadd_back(&stack, ft_lstnew(10));
//     ft_lstadd_back(&stack, ft_lstnew(10));
//     ft_lstadd_back(&stack, ft_lstnew(19));
    
//     while(stack)
//     {
//         push(&stack, &stackb);
//     }
    
//     while(stackb)
//     {
//         printf("%d\n", stackb->content);
//         stackb = stackb->next;
//     }
// }