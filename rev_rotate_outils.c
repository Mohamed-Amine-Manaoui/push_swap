/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_outils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:41:04 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/04 03:06:11 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate(t_stack **head)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*head || (*head)->next == NULL)
		return ;
	tmp = *head;
	while (tmp->next != NULL)
	{
		last = tmp;
		tmp = tmp->next;
	}
	last->next = NULL;
	ft_lstadd_front(head, tmp);
}

void	rev_rotate_a(t_stack **head)
{
	rev_rotate(head);
	write(1, "rra\n", 4);
}

void	rev_rotate_b(t_stack **head)
{
	rev_rotate(head);
	write(1, "rrb\n", 4);
}

void	rev_rotate_r(t_stack **head_A, t_stack **head_B)
{
	rev_rotate(head_A);
	rev_rotate(head_B);
	write(1, "rrr\n", 4);
}