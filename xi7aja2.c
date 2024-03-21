#include "push_swap.h"

int	find_max(t_stack *head, int target)
{
	int		i;
	t_stack	*help;

	i = 0;
	help = head;
	while (help != NULL)
	{
		if (help->data == target)
			return (1);
		help = help->next;
		i++;
	}
	return (0);
}

int	max_of_(t_stack **head)
{
	int		max;
	t_stack	*current;

	max = (*head)->data;
	current = (*head)->next;
	while (current != NULL)
	{
		if (current->data > max)
			max = current->data;
		current = current->next;
	}
	return (max);
}

void	first_condition(t_stack **a, t_stack **b, t_chunk *init)
{
	if ((*b)->data == init->tab[init->max_tab])
	{
		push_B_to_A(b, a);
		init->max_tab--;
	}
	else if (find_max(*a, init->tab[init->max_tab]))
	{
		search_and_move_a(a, init->tab[init->max_tab]);
		init->max_tab--;
	}
	else
	{
		if (ft_lstsize(*a) >= 1
			&& ((ft_lstlast(*a)->data) == init->tab[init->first_max]
				|| (*b)->data > (ft_lstlast(*a)->data)))
		{
			push_B_to_A(b, a);
			rotate_a(a);
		}
		else
			search_and_move_b(b, init->tab[init->max_tab]);
	}
}
void	sort_3(t_stack **head)
{
	int	max_data;
	if (!(*head) || !(*head)->next || !(*head)->next->next)
		return ;
	max_data = max_of_(head);
	if (max_data == (*head)->data)
		rotate_a(head);
	else if (max_data == (*head)->next->data)
		rev_rotate_a(head);
	if ((*head)->data > ((*head)->next->data))
		swap_a(head);
}


void	xi7aja2(t_stack *a, t_stack *b, t_chunk *init)
{
	init->first_max = ft_lstsize(b) - 1;
	init->max_tab = ft_lstsize(b) - 1;
	init->max = max_of_(&b);
	while (ft_lstsize(b))
	{
		first_condition(&a, &b, init);
	}
	while (a->data > init->tab[0])
		rev_rotate_a(&a);
}
