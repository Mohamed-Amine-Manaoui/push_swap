/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 15:37:17 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/24 20:46:44 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_error(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (((str[i] == '-' || str[i] == '+') && !(str[i + 1] >= 48 && str[i
						+ 1] <= 57)) || check_alpha(str))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
}

void	check_overflow(long res, int signe)
{
	if (res * signe > 2147483647 || res * signe < -2147483648)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
}

int	ft_atoi(const char *str)
{
	int		i;
	long	res;
	int		signe;

	signe = 1;
	handle_error((char *)str);
	i = 0;
	while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	res = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i++;
		check_overflow(res, signe);
	}
	return (res * signe);
}

int	count_kalimat(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	**ft_split(char *s, char c)
{
	t_chunk	init;
	char	**ptr;

	init.i = 0;
	init.k = 0;
	if (!s)
		return (NULL);
	ptr = ft_malloc((count_kalimat(s, c) + 1) * sizeof(char *), 'm');
	if (!ptr)
		return (NULL);
	while (s[init.i])
	{
		while (s[init.i] == c)
			init.i++;
		if (s[init.i] == '\0')
			break ;
		init.j = 0;
		while (s[init.i] && s[init.i] != c && init.j++ > -1)
			init.i++;
		ptr[init.k++] = ft_substr(s, init.i - init.j, init.j);
		if (!ptr[init.k - 1])
			ft_malloc(0, 'f');
	}
	ptr[init.k] = NULL;
	return (ptr);
}
