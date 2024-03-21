/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmanaoui <mmanaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:40:16 by mmanaoui          #+#    #+#             */
/*   Updated: 2024/03/09 06:47:10 by mmanaoui         ###   ########.fr       */
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
void				swap_a(t_stack **head);
void				swap_b(t_stack **head);
void				rotate_a(t_stack **head);
void				rotate_b(t_stack **head);
void				rotate_r(t_stack **head_A, t_stack **head_B);
void				rev_rotate_a(t_stack **head);
void				rev_rotate_b(t_stack **head);
void				rev_rotate_r(t_stack **head_A, t_stack **head_B);
void				push_B_to_A(t_stack **A, t_stack **B);
void				push_A_to_B(t_stack **A, t_stack **B);
void				rotate(t_stack **head);
void				rev_rotate(t_stack **head);
void				swap(t_stack **head);
int					max_of_(t_stack **head);

void				search_and_move_a(t_stack **head_a, int num);
void				search_and_move_b(t_stack **head_b, int num);
void				push_to_chunk(t_stack **a, t_stack **b, t_chunk *init);
void				stack_to_array(t_stack *a, int stack_size, int *tab);
void				quick_sort(int *tab, int first_i, int last_i);
int					has_duplicates(t_stack *head_a);
void				xi7aja(t_stack **a, t_stack **b, t_chunk *init);
void				xi7aja2(t_stack *a, t_stack *b, t_chunk *init);
void				get_offset(int *size, int *n);
void				sort_3(t_stack **head);
void				sort_1_2_3_4_5_6(t_stack **a, t_stack **b, t_chunk *init);
void				check_instruction(t_stack **a, t_stack **b);
int					again_sorted(t_stack *a);
void				ft_cmp(t_stack **a, t_stack **b, char *line);
void				ft_cmp2(t_stack **a, t_stack **b, char *line);
int					ft_strcmp(char *s1, char *s2);
char				**split(char *s, char c);
void				*ft_malloc(size_t size, char f_or_m);
int					ft_isdigit(int c);
int					has_duplicates(t_stack *head_a);
int					again_sorted(t_stack *a);
int	check_alpha(char *av);
#endif
