/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:38:53 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/24 00:13:11 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	t_chunk	init;
	char	**h_num;
	char	*str;

	a = NULL;
	b = NULL;
	if (ac == 1)
		exit(0);
	str = valid_data(ac, av);
	h_num = ft_split(str, ' ');
	init_stack(h_num, &a);
	if (is_sorted(a))
	{
		exit(0);
	}
	sort_all(&a, &b, &init);
	return (0);
}
