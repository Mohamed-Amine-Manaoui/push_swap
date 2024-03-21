/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 03:05:25 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/08 16:48:27 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstsize(t_stack *head)
{
	int	count;

	count = 0;
	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}

void	ft_lstadd_front(t_stack **list, t_stack *new)
{
	if (list && new)
	{
		new->next = *list;
		*list = new;
	}
}

t_stack	*ft_lstlast(t_stack *list)
{
	if (!list)
		return (NULL);
	while (list->next != NULL)
	{
		list = list->next;
	}
	return (list);
}

t_stack	*ft_lstnew(int data)
{
	t_stack	*ptr;

	ptr = ft_malloc(sizeof(t_stack), 'm');
	if (ptr == NULL)
		return (NULL);
	ptr->data = data;
	ptr->next = NULL;
	return (ptr);
}
