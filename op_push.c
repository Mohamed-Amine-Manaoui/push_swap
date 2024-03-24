/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:37:25 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/23 15:37:27 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if ((*a) == NULL)
		return ;
	tmp = (*a);
	(*a) = (*a)->next;
	tmp->next = (*b);
	(*b) = tmp;
}

void	pb(t_stack **a, t_stack **b)
{
	if (*a)
	{
		push(a, b);
		write(1, "pb\n", 3);
	}
}

void	pa(t_stack **b, t_stack **a)
{
	if (*b)
	{
		push(b, a);
		write(1, "pa\n", 3);
	}
}
