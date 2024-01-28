#include "push_swap.h"

int main()
{
    t_list *tmp;
    t_list *head = ft_lstnew(15);
    ft_lstadd_back(&head, ft_lstnew(20));
    ft_lstadd_back(&head, ft_lstnew(25));
    ft_lstadd_back(&head, ft_lstnew(30));
    ft_lstadd_back(&head, ft_lstnew(35));

    t_list *head2 = ft_lstnew(15);
    ft_lstadd_back(&head2, ft_lstnew(20));
    ft_lstadd_back(&head2, ft_lstnew(25));
    ft_lstadd_back(&head2, ft_lstnew(30));
    ft_lstadd_back(&head2, ft_lstnew(35));

    //push(&head, &head2);
    swap(&head2);
    ss(&head2, &head);
    while(head2)
    {
        printf("%d", head2->content);
        head2 = head2->next;
    }
    // rev(&tmp);
    // write(1, "\n", 1);
    // while(tmp->next)
    // {
    //     printf("%d", tmp->content);
    //     tmp = tmp->next;
    // }
}