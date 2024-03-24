/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_move.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:39:07 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/24 00:11:19 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_position(t_stack *head, int target)
{
	int		i;
	t_stack	*help;

	i = 0;
	help = head;
	while (help != NULL)
	{
		if (help->data == target)
			return (i);
		help = help->next;
		i++;
	}
	return (-1);
}

void	search_and_move_a(t_stack **head_a, int num)
{
	int	find_pos;
	int	size;

	find_pos = find_position(*head_a, num);
	size = ft_lstsize(*head_a);
	if (find_pos <= size / 2)
	{
		while ((*head_a)->data != num)
			ra(head_a);
	}
	else
	{
		while ((*head_a)->data != num)
			rra(head_a);
	}
}

void	search_and_move_b(t_stack **head_b, int num)
{
	int	find_pos;
	int	size;

	find_pos = find_position(*head_b, num);
	size = ft_lstsize(*head_b);
	if (find_pos <= size / 2)
		rb(head_b);
	else
		rrb(head_b);
}
