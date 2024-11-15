/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a_to_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:36:34 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/23 17:22:43 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_offset(int *size, int *n)
{
	if (*size <= 100)
		*n = 7;
	else
		*n = 10;
}

void	a_to_b(t_stack **a, t_stack **b, t_chunk *init)
{
	init->size = ft_lstsize(*a);
	init->tab = malloc(init->size * sizeof(int));
	stack_to_array(*a, ft_lstsize(*a), init->tab);
	quick_sort(init->tab, 0, ft_lstsize(*a) - 1);
	get_offset(&init->size, &init->n);
	init->offset = init->size / init->n;
	init->mid = init->size / 2 - 1;
	init->start = init->mid - init->offset;
	init->end = init->mid + init->offset;
	while (*a)
	{
		if (init->start < 0)
			init->start = 0;
		if (init->end > init->size - 1)
			init->end = init->size - 1;
		get_chunk(a, b, init);
		init->start -= init->offset;
		init->end += init->offset;
		if (init->start < 0)
			init->start = 0;
		if (init->end > init->size - 1)
			init->end = init->size - 1;
		get_chunk(a, b, init);
	}
}
