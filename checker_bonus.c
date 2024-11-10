/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 17:31:41 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/11/10 18:03:41 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**h_num;
	char	*str;

	a = NULL;
	b = NULL;
	if (ac == 1)
		exit(0);
	str = valid_data(ac, av);
	h_num = ft_split(str, ' ');
	init_stack(h_num, &a);
	check_instruction_2(&a, &b);
	if (is_sorted(a) && !b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_malloc(0, 'f');
	return (0);
}
