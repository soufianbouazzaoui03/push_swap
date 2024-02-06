/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bestmove.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 01:51:20 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/06 02:12:58 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

// t_list *find2nd(t_list *stack)
// {
//     t_list *max;
//     t_list *second;
//     t_list *cpy;

//     max = findmax(stack);
//     second = ft_lstnew(INT_MIN);
//     cpy = stack;
//     while(cpy)
//     {
//         if(cpy->content > second->content && cpy->content != max->content)
//             second = cpy;
//         cpy = cpy->next;
//     }
//     return (second);
// }
// int ft_bestmove2(t_list *stack)
// {
//     int i;

//     i = 0;
//     while(stack)
//     {
//         if(stack->content == find2nd(stack)->content)
//             return (i);
//         i++;
//         stack = stack->next;
//     }
//     return (-1);
// }

// void sorting2(t_list **stacka, t_list **stackb)
// {
//     int bestmove;
//     int ref;

//     ref = ft_lstsize(*stackb) / 2;
//     while((*stackb))
//     {
//         ref = ft_lstsize(*stackb) / 2;
//         bestmove = ft_bestmove((*stackb));
//         if(bestmove < ref)
//         {
//             while(bestmove--)
//                 retateb(stackb);
//             pusha(stackb, stacka);
//         }
//         else
//         {
//             bestmove = ft_lstsize(*stackb) - bestmove;
//             while((bestmove--))
//                 rev(stackb);
//             pusha(stackb, stacka);
//         }
//     }
// }

