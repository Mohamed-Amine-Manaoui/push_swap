/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 03:06:01 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/08 23:26:16 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *a, int *b)
{
	int	change;

	change = *a;
	*a = *b;
	*b = change;
}

int	partition(int *tab, int first_i, int last_i)
{
	int	pivot;
	int	i;
	int	j;

	pivot = tab[last_i];
	i = first_i - 1;
	j = first_i;
	while (j < last_i)
	{
		if (tab[j] < pivot)
		{
			i++;
			ft_swap(&tab[i], &tab[j]);
		}
		j++;
	}
	ft_swap(&tab[i + 1], &tab[last_i]);
	return (i + 1);
}

void	quick_sort(int *tab, int first_i, int last_i)
{
	int	part;

	if (first_i < last_i)
	{
		part = partition(tab, first_i, last_i);
		quick_sort(tab, first_i, part - 1);
		quick_sort(tab, part + 1, last_i);
	}
}

void	stack_to_array(t_stack *a, int stack_size, int *tab)
{
	int	i;

	i = 0;
	while (i < stack_size)
	{
		tab[i] = (a)->data;
		i++;
		a = (a)->next;
	}
}
