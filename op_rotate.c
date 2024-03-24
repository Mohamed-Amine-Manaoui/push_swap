/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:41:18 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/24 00:15:01 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_stack **head)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	if (!*head || (*head)->next == NULL)
		return ;
	tmp = *head;
	*head = (*head)->next;
	tmp->next = NULL;
	tmp2 = ft_lstlast(*head);
	tmp2->next = tmp;
}

void	ra(t_stack **head)
{
	rotate(head);
	write(1, "ra\n", 3);
}

void	rb(t_stack **head)
{
	rotate(head);
	write(1, "rb\n", 3);
}

void	rr(t_stack **head_A, t_stack **head_B)
{
	rotate(head_A);
	rotate(head_B);
	write(1, "rr\n", 3);
}
