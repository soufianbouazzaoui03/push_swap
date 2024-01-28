/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soel-bou <soel-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:20:08 by soel-bou          #+#    #+#             */
/*   Updated: 2024/01/28 17:10:12 by soel-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void checker(char *num)
{
    int i;
    int sign;
    int res;

    res = 0;
    sign = 1;
    i = 0;
    while(num[i] > 9 && num[i] < 13)
    {
        write(2, "erro1", 5);
        exit(EXIT_FAILURE);
    }
    while(num[i] == ' ')
        i++;
    if(num[i] == '\0')
    {
        write(2, "erro2", 5);
        exit(EXIT_FAILURE);
    }
    // if(num[i] == '-')
    //     sign = -1;
    // if(num[i] == '-')
    //     sign = 1;
    while(num[i] >= '0' && num[i] <= '9')
    {
        res = res * 10 + num[i] - '0';
        i++;
    }
    if(num[i] != '\0')
    {
        write(2, "erro3", 5);
        exit(EXIT_FAILURE);
    }
    res *= sign;
    if(res < INT_MIN || res > INT_MAX)
    {
        printf("%d", res);
        write(2, "erro4", 5);
        exit(EXIT_FAILURE);
    }
}
//**********************************
int checkarr(int *num, int size)
{
    int i;
    int j;
    int check;

    i = 0;
    while(i <= size)
    {
        j = 0;
        check = 0;
        while(j < size)
        {
            if(num[j] == num[i])
                check++;
            if(check > 1)
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int checkdup(int argc, char **argv)
{
    int i;
    int size;
    char **list;
    int *num;

    i = 1;
    size = 0;
    while(i < argc)
    {
        list = ft_split(argv[i], ' ');
        while(list[size])
            size++;
        free(list);
        i++;
    }
    i = 1;
    size = 0;
    num = (int *)malloc(sizeof(int) * size);
    while(i < argc)
    {
        list = ft_split(argv[i++], ' ');
        while(list[size])
        {
            num[size] = ft_atoi(list[size]);
            size++;
        }
        free(list);
    }
    printf("%d", size);
    return (checkarr(num, size));
}

void checklist(int argc, char **argv)
{
    int i;
    int j;
    char **list;

    i = 1;
    j = 0;
    while(i <= argc - 1)
    {
        list = ft_split(argv[i], ' ');
        while(list[j])
        {
            checker(list[j]);
            j++;
        }
        free(list);
        j = 0;
        i++;
    }
    if(checkdup(argc, argv) == 1)
        exit(EXIT_FAILURE);
}

int main(int argc, char **argv)
{
    checklist(argc, argv);
    printf("done");
}