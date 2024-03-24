/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:40:16 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/24 00:14:10 by mmanaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "get_next_line/get_next_line.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_chunk
{
	int				start;
	int				end;
	int				mid;
	int				size;
	int				n;
	int				*tab;
	int				offset;
	int				first_max;
	int				max_tab;
	int				max;
	int				i;
	int				j;
	int				k;
}					t_chunk;
typedef struct s_stack
{
	int				data;
	struct s_stack	*next;
}					t_stack;
typedef struct s_malloc
{
	void			*data;
	struct s_malloc	*next;
}					t_malloc;
void				ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack				*ft_lstlast(t_stack *list);
t_stack				*ft_lstnew(int data);
void				ft_lstadd_front(t_stack **list, t_stack *new);
int					ft_atoi(const char *str);
int					ft_lstsize(t_stack *head);
void				push(t_stack **head_a, t_stack **head_b);
void				sa(t_stack **head);
void				sb(t_stack **head);
void				ra(t_stack **head);
void				rb(t_stack **head);
void				rr(t_stack **head_A, t_stack **head_B);
void				rra(t_stack **head);
void				rrb(t_stack **head);
void				rrr(t_stack **head_A, t_stack **head_B);
void				pa(t_stack **A, t_stack **B);
void				pb(t_stack **A, t_stack **B);
void				rotate(t_stack **head);
void				rrotate(t_stack **head);
void				swap(t_stack **head);
int					max_of_(t_stack **head);
void				search_and_move_a(t_stack **head_a, int num);
void				search_and_move_b(t_stack **head_b, int num);
void				get_chunk(t_stack **a, t_stack **b, t_chunk *init);
void				stack_to_array(t_stack *a, int stack_size, int *tab);
void				quick_sort(int *tab, int first_i, int last_i);
int					has_duplicates(t_stack *head_a);
void				a_to_b(t_stack **a, t_stack **b, t_chunk *init);
void				b_to_a(t_stack *a, t_stack *b, t_chunk *init);
void				get_offset(int *size, int *n);
void				sort_3(t_stack **head);
void				sort_all(t_stack **a, t_stack **b, t_chunk *init);
void				check_instruction(t_stack **a, t_stack **b);
int					is_sorted(t_stack *a);
void				checks(t_stack **a, t_stack **b, char *line);
int					ft_strcmp(char *s1, char *s2);
char				**ft_split(char *s, char c);
void				*ft_malloc(size_t size, char f_or_m);
int					ft_isdigit(int c);
int					has_duplicates(t_stack *head_a);
int					check_alpha(char *av);
void				check_instruction_2(t_stack **a, t_stack **b);
void				init_stack(char **h_num, t_stack **a);
char				*valid_data(int ac, char **av);
#endif
