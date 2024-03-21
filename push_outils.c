/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_outils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 03:03:46 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/05 17:38:38 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **head_a, t_stack **head_b)
{
	t_stack	*tmp;

	if ((*head_a) == NULL)
		return ;
	tmp = (*head_a);
	(*head_a) = (*head_a)->next;
	tmp->next = (*head_b);
	(*head_b) = tmp;
}

void	push_A_to_B(t_stack **A, t_stack **B)
{
	if (*A)
	{
		push(A, B);
		write(1, "pb\n", 3);
	}
}

void	push_B_to_A(t_stack **B, t_stack **A)
{
	if (*B)
	{
		push(B, A);
		write(1, "pa\n", 3);
	}
}
