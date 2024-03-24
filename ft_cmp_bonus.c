/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:29:01 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/24 01:57:46 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

void	checks_triples(t_stack **a, t_stack **b, char *line)
{
	if (ft_strcmp(line, "rra\n"))
		rrotate(a);
	else if (ft_strcmp(line, "rrb\n"))
		rrotate(b);
	else if (ft_strcmp(line, "rrr\n"))
	{
		rrotate(a);
		rrotate(b);
	}
	else
		write(1, "Error\n", 6);
}

void	checks(t_stack **a, t_stack **b, char *line)
{
	if (ft_strcmp(line, "sa\n"))
		swap(a);
	else if (ft_strcmp(line, "sb\n"))
		swap(b);
	else if (ft_strcmp(line, "ss\n"))
	{
		swap(a);
		swap(b);
	}
	else if (ft_strcmp(line, "pa\n"))
		push(a, b);
	else if (ft_strcmp(line, "pb\n"))
		push(b, a);
	else if (ft_strcmp(line, "ra\n"))
		rotate(a);
	else if (ft_strcmp(line, "rb\n"))
		rotate(b);
	else if (ft_strcmp(line, "rr\n"))
	{
		rotate(a);
		rotate(b);
	}
	else
		checks_triples(a, b, line);
}

void	check_instruction_2(t_stack **a, t_stack **b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		checks(a, b, line);
		line = get_next_line(0);
	}
}
