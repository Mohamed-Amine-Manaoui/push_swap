/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmp_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:15:06 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/05 21:15:08 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

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
void	ft_cmp2(t_stack **a, t_stack **b, char *line)
{
	if (ft_strcmp(line, "rra\n"))
		rev_rotate(a);
	else if (ft_strcmp(line, "rrb\n"))
		rev_rotate(b);
	else if (ft_strcmp(line, "rrr\n"))
	{
		rev_rotate(a);
		rev_rotate(b);
	}
	else
		write(1, "Error\n", 6);
}

void	ft_cmp(t_stack **a, t_stack **b, char *line)
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
		ft_cmp2(a, b, line);
}

int	again_sorted(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	check_instruction(t_stack **a, t_stack **b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		ft_cmp(a, b, line);
		line = get_next_line(0);
	}
}
