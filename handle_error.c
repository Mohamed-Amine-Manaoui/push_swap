/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:38:21 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/11/10 18:04:29 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_duplicates(t_stack *head_a)
{
	t_stack	*i;
	t_stack	*j;

	i = head_a;
	while (i != NULL)
	{
		j = i->next;
		while (j != NULL)
		{
			if (i->data == j->data)
				return (1);
			j = j->next;
		}
		i = i->next;
	}
	return (0);
}

int	is_sorted(t_stack *a)
{
	t_stack	*tmp;

	if (!a)
		return (0);
	tmp = a;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	check_alpha(char *av)
{
	int	i;

	i = 0;
	if (av[i] == '-' || av[i] == '+')
		i++;
	if (!av[i])
		return (1);
	while (av[i])
	{
		if (ft_isdigit(av[i]))
			i++;
		else
			return (1);
	}
	return (0);
}
