/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_chunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 03:05:51 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/04 03:05:56 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_chunk(t_stack **a, t_stack **b, t_chunk *init)
{
	int	size;
	int	size_b;

	size = ft_lstsize(*a);
	size_b = 0;
	while (size_b <= init->end - init->start)
	{
		size_b = ft_lstsize(*b);
		if ((*a)->data >= init->tab[init->start]
			&& (*a)->data <= init->tab[init->end])
		{
			push_A_to_B(a, b);
			if ((*b)->next != NULL && (*b)->data < init->tab[init->mid])
				rotate_b(b);
		}
		else
			rotate_a(a);
		size_b = ft_lstsize(*b);
	}
}
