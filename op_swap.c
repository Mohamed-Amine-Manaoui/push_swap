/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:41:26 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/23 15:38:48 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack **head)
{
	t_stack	*tmp;

	if (!*head || (*head)->next == NULL)
		return ;
	tmp = (*head)->next;
	(*head)->next = tmp->next;
	tmp->next = (*head);
	(*head) = tmp;
}

void	sa(t_stack **head)
{
	swap(head);
	printf("sa\n");
}

void	sb(t_stack **head)
{
	swap(head);
	printf("sb\n");
}

void	ss(t_stack **head_A, t_stack **head_B)
{
	sa(head_A);
	sb(head_B);
	write(1, "ss\n", 3);
}
