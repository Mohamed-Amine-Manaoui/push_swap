/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_1_2_3_4_5_6.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 20:08:59 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/04 20:25:40 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void sort_2(t_stack **head)
{
	if (!(*head) || !(*head)->next)
		return ;
	if ((*head)->data > (*head)->next->data)
		swap_a(head);
}
void sort_4(t_stack **a, t_stack **b)
{
	int i;
	int size;
	int max;

	i = 0;
	if (!(*a) || !(*a)->next)
		return ;
	size = ft_lstsize(*a) - 3;
	max = max_of_(a);
	while (i < size)
	{
		if ((*a)->data == max)
		{
			push_A_to_B(a, b);
			i++;
		}
		else
			rotate_a(a);
	}
	sort_3(a);
	push_B_to_A(b, a);
	rotate_a(a);
}

void sort_5(t_stack **a, t_stack **b)
{
	int i;
	int size;
	int max;

	i = 0;
	if (!(*a) || !(*a)->next)
		return ;
	size = ft_lstsize(*a) - 4;
	max = max_of_(a);
	while (i < size)
	{
		if ((*a)->data == max)
		{
			push_A_to_B(a, b);
			i++;
		}
		else
			rotate_a(a);
	}
	sort_4(a, b);
	push_B_to_A(b, a);
	rotate_a(a);
}

void sort_6(t_stack **a, t_stack **b)
{
	int i;
	int size;
	int max;

	i = 0;
	if (!(*a) || !(*a)->next)
		return ;
	size = ft_lstsize(*a) - 5;
	max = max_of_(a);
	while (i < size)
	{
		if ((*a)->data == max)
		{
			push_A_to_B(a, b);
			i++;
		}
		else
			rotate_a(a);
	}
	sort_5(a, b);
	push_B_to_A(b, a);
	rotate_a(a);
}
void	sort_1_2_3_4_5_6(t_stack **a, t_stack **b, t_chunk *init)
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
        xi7aja(a, b, init);
        xi7aja2(*a, *b, init);
    }
}
