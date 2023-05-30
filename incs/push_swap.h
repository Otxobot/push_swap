/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:21:01 by abasante          #+#    #+#             */
/*   Updated: 2023/05/30 17:22:26 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define	PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <limits.h>

typedef struct			s_list
{
	int				number;
	int				index;
	struct s_list 	*next;	 
}						t_list;

int			check_if_repeat(char **av);
int			check_args(char **input);
int			check_elements(char	**av);
int			is_sorted(char **av);
void		free_split(char **input);
void 		create_linked_list(t_list **head, char **input);
t_list		*ft_lstnew(int number);
void		ft_lstadd_back(t_list **stack, t_list *new);
t_list		*ft_lstlast(t_list *head);
int 		ft_lstsize(t_list *lst);
void		start_push_swap(char **input);
void		printLinkedList(t_list *head);
void		sort_stack_a(t_list **a, t_list **b);
void		easy_sort(t_list **a, int size);
void		easy_sort1(t_list **a, int size);
void		easy_sort_divide(t_list **a, int size);
int			check_order(t_list **lst, char a);
void		medium_sort(t_list **a, t_list **b);
int			cost_in_a(t_list *a, int nbr);
int			check_max_min(t_list *lst, int number, char c);
void		three_numbers(t_list **a);
int			ft_rotate_ab(t_list **a, t_list **b);

t_list			*get_min(t_list  **stack);
//movements:
void		push(t_list	**lst, t_list	**dst);
void			pa(t_list **a, t_list **b);
void			pb(t_list **a, t_list **b);

void		rotate(t_list **lst);
void			ra(t_list **a);
void			rb(t_list **b);

void		reverse_rotate(t_list **lst);
void			rra(t_list **a);
void			rrb(t_list **b);

void		swap(t_list **lst);
void			sa(t_list **a);
void			sb(t_list **b);

//move:

//cost:

//trying things, after trying they will change: (NOT CHANGED) when changed, change whatever is inside the parentesees

void		index_stack(t_list	**stack);

#endif