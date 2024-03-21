/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:14:51 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/08 18:00:23 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void initialize_stacks2(int ac, char **av, t_stack **a, t_stack **b) 
{
    t_stack *node;
    int i;
    int data;

    *a = NULL;
    *b = NULL;
    i = 1;
    while (i < ac)
    {
        data = ft_atoi(av[i]);
        node = ft_lstnew(data);
        ft_lstadd_back(a, node);
        i++;
    }
    if (has_duplicates(*a))
    {
        write(2, "Error\n", 6);
        exit(0);
    }
}

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	initialize_stacks2(ac, av, &a, &b);
	check_instruction(&a, &b);
	if (again_sorted(a) && !b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (0);
}
