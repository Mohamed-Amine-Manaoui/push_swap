/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:01:12 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/24 00:10:53 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_2(t_stack **head)
{
	if (!(*head) || !(*head)->next)
		return ;
	if ((*head)->data > (*head)->next->data)
		sa(head);
}

void	sort_4(t_stack **a, t_stack **b)
{
	int	i;
	int	size;
	int	max;

	i = 0;
	if (!(*a) || !(*a)->next)
		return ;
	size = ft_lstsize(*a) - 3;
	max = max_of_(a);
	while (i < size)
	{
		search_and_move_a(a, max);
		if ((*a)->data == max)
		{
			pb(a, b);
			i++;
		}
	}
	sort_3(a);
	pa(b, a);
	ra(a);
}

void	sort_5(t_stack **a, t_stack **b)
{
	int	i;
	int	size;
	int	max;

	i = 0;
	if (!(*a) || !(*a)->next)
		return ;
	size = ft_lstsize(*a) - 4;
	max = max_of_(a);
	while (i < size)
	{
		search_and_move_a(a, max);
		if ((*a)->data == max)
		{
			pb(a, b);
			i++;
		}
	}
	sort_4(a, b);
	pa(b, a);
	ra(a);
}

void	sort_6(t_stack **a, t_stack **b)
{
	int	i;
	int	size;
	int	max;

	i = 0;
	if (!(*a) || !(*a)->next)
		return ;
	size = ft_lstsize(*a) - 5;
	max = max_of_(a);
	while (i < size)
	{
		if ((*a)->data == max)
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
	sort_5(a, b);
	pa(b, a);
	ra(a);
}

void	sort_all(t_stack **a, t_stack **b, t_chunk *init)
{
	int	size;

	size = ft_lstsize(*a);
	if (size == 1)
		return ;
	else if (size == 2)
		sort_2(a);
	else if (size == 3)
		sort_3(a);
	else if (size == 4)
		sort_4(a, b);
	else if (size == 5)
		sort_5(a, b);
	else if (size == 6)
		sort_6(a, b);
	else
	{
		a_to_b(a, b, init);
		b_to_a(*a, *b, init);
	}
}
