/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:21:01 by abasante          #+#    #+#             */
/*   Updated: 2023/05/23 12:13:50 by abasante         ###   ########.fr       */
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
t_list		*ft_lstnew(int number, int l);
void		ft_lstadd_back(t_list **stack, t_list *new);
t_list		*ft_lstlast(t_list *head);
int 		ft_lstsize(t_list *lst);
void		start_push_swap(char **input);
void		printLinkedList(t_list *head);
void		sort_stack_a(t_list **a, t_list **a);

#endif