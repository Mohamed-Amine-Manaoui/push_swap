/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 05:27:02 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/21 05:42:06 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	initialize_stacks(char **h_num, t_stack **a)
{
	t_stack	*node;
	int		i;
	int		data;

	i = 0;
	while (h_num[i])
	{
		data = ft_atoi(h_num[i]);
		node = ft_lstnew(data);
		ft_lstadd_back(a, node);
		i++;
	}
	if (has_duplicates(*a))
	{
		ft_malloc(0, 'f');
		write(2, "Error\n", 6);
		exit(0);
	}
	if (again_sorted(*a))
	{
		ft_malloc(0, 'f');
		exit(0);
	}
}

int	count_spaces(char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count);
}

char	*xi7aja4(int ac, char **av)
{
	int		i;
	char	*str;

	i = 1;
	str = NULL;
	while (i < ac)
	{
		if (av[i][0] == '\0' || count_spaces(av[i], 32) == ft_strlen(av[i])
			|| (av[i][0] == '-' && !ft_isdigit(av[i][1])))
		{
			ft_malloc(0, 'f');
			write(2, "Error\n", 6);
			exit(0);
		}
		if (av[i][0] == 0)
			i++;
		str = ft_strjoin(str, av[i]);
		str = ft_strjoin(str, " ");
		i++;
	}
	return (str);
}

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
	str = xi7aja4(ac, av);
	h_num = split(str, ' ');
	initialize_stacks(h_num, &a);
	sort_1_2_3_4_5_6(&a, &b, &init);
	// system("leaks push_swap");
	return (0);
}
