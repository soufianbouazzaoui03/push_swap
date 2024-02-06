/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortsmall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 04:19:42 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/06 05:36:00 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    sort3(t_list **stacka)
{
    int first;
    int second;
    int therd;

    first = (*stacka)->content;
    second = (*stacka)->next->content;
    therd = (*stacka)->next->next->content;
    if(first > second && second < therd && first < therd)
        swap(stacka);
    else if(first > second && second < therd && first > therd)
        retatea(stacka);
    else if(first < second && second > therd && first > therd)
        reva(stacka);
    else if(first > second && second > therd && first > therd)
    {
        swap(stacka);
        reva(stacka);
    }
    else 
    {
        swap(stacka);
        retatea(stacka);
    }
}
