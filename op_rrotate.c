/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:41:04 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/24 00:14:49 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrotate(t_stack **head)
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

void	rra(t_stack **head)
{
	rrotate(head);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **head)
{
	rrotate(head);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **head_A, t_stack **head_B)
{
	rrotate(head_A);
	rrotate(head_B);
	write(1, "rrr\n", 4);
}
