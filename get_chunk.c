/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_chunk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:38:13 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/11/10 17:41:17 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_chunk(t_stack **a, t_stack **b, t_chunk *init)
{
	int	size_b;

	size_b = 0;
	while (size_b <= init->end - init->start)
	{
		if ((*a)->data >= init->tab[init->start]
			&& (*a)->data <= init->tab[init->end])
		{
			pb(a, b);
			if ((*b)->next != NULL && (*b)->data < init->tab[init->mid])
				rb(b);
		}
		else
			ra(a);
		size_b = ft_lstsize(*b);
	}
}
