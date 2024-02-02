/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:08:56 by soel-bou          #+#    #+#             */
/*   Updated: 2024/02/02 00:27:27 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int checknum(char *num)
{
    int i;
    int sign;
    long res;

    res = 0;
    sign = 1;
    i = 0;
    while(num[i] > 9 && num[i] < 13)
        return (1);
    while(num[i] == ' ')
        i++;
    if(num[i] == '\0')
        return (1);
    if(num[i] == '+' && i++)
        sign = 1;
    if(num[i] == '-' && i++)
        sign = -1;
    if(num[i] == '\0')
        return (1);
    while(num[i] >= '0' && num[i] <= '9')
        res = res * 10 + num[i++] - '0';
    if((num[i] < '0' || num[i] > '9') && num[i] != '\0')
        return (1);
    res *= sign;
    if(res < INT_MIN || res > INT_MAX)
        return (1);
    return (0);
}

int checklist(int argc, char **argv, t_list **stack)
{
    char    **list;
    int     i;
    int     j;
    
    i = 0;
    j = 0;
    while(++i < argc)
    {
        list = ft_split(argv[i], ' ');
        if(!list[0])
            return (ft_lstclear(stack, free),free(list), 1);
        j = 0;
        while(list[j])
        {
            if(checknum(list[j]) || implement(stack, ft_atoi(list[j])))
                return (ft_lstclear(stack, free),free(list), 1);
            j++;
        }
        free(list);
        list = NULL;
    }
    return (0);
}

int main(int argc, char **argv)
{
    t_list *stack;
    t_list *stackb;
    t_list  *cpy;
    if(checklist(argc, argv, &stack))
            printf("error");
    // if(is_sorted(stack))
    //     return (0);
    cpy = stack;
    indexed(stack);
    while(cpy)
    {
        printf("%d ======== %d\n", cpy->content, cpy->index);
        cpy = cpy->next;
    }
    sorting(&stack, &stackb);
    printf("test\n");
    while(stackb)
    {
        printf("%d\n", stackb->content);
        stackb = stackb->next;
    }
}