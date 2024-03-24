/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:37:45 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/24 00:21:27 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		pa(b, a);
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
			pa(b, a);
			ra(a);
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
		ra(head);
	else if (max_data == (*head)->next->data)
		rra(head);
	if ((*head)->data > ((*head)->next->data))
		sa(head);
}

void	b_to_a(t_stack *a, t_stack *b, t_chunk *init)
{
	init->first_max = ft_lstsize(b) - 1;
	init->max_tab = ft_lstsize(b) - 1;
	init->max = max_of_(&b);
	while (ft_lstsize(b))
	{
		first_condition(&a, &b, init);
	}
	while (a->data > init->tab[0])
		rra(&a);
}
