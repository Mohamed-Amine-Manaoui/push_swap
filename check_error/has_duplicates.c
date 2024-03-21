# include "../push_swap.h"

int has_duplicates(t_stack *head_a)
{
    t_stack *i;
    t_stack *j;

    i = head_a;
    while (i != NULL)
    {
        j = i->next;
        while (j != NULL)
        {
            if (i->data == j->data)
                return (1);
            j = j->next;
        }
        i = i->next;
    }
    return (0);
}
