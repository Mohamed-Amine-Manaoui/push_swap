# include "push_swap.h"

int again_sorted(t_stack *a)
{
    t_stack *tmp;

    tmp = a;
    while (tmp->next)
    {
        if (tmp->data > tmp->next->data)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}
