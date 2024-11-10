/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 21:07:49 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/11/10 17:43:43 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(char **h_num, t_stack **a)
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
		write(2, "Error\n", 6);
		(ft_malloc(0, 'f'), exit(1));
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

char	*valid_data(int ac, char **av)
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
			(ft_malloc(0, 'f'), exit(1));
		}
		if (av[i][0] == 0)
			i++;
		str = ft_strjoin(str, av[i]);
		str = ft_strjoin(str, " ");
		i++;
	}
	return (str);
}
