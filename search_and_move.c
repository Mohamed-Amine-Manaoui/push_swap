/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_move.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:06:21 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/05 18:06:23 by mmanaoui         ###   ########.fr       */
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
	return (-1); // Error !!
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
			rotate_a(head_a);
	}
	else
	{
		while ((*head_a)->data != num)
			rev_rotate_a(head_a);
	}
}

void	search_and_move_b(t_stack **head_b, int num)
{
	int	find_pos;
	int	size;

	find_pos = find_position(*head_b, num);
	size = ft_lstsize(*head_b);
	if (find_pos <= size / 2)
		rotate_b(head_b);
	else
		rev_rotate_b(head_b);
}
