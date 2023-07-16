/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otxoboy <otxoboy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:26:22 by abasante          #+#    #+#             */
/*   Updated: 2023/07/16 12:34:38 by otxoboy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

//swap:
void		swap(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *lst;
	tmp2 = tmp->next;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	*lst = tmp2;
	relative_position(*lst);
}

void	double_swap(t_list **a, t_list **b)
{
	if (*a && *b && (*a)->next && (*b)->next)
	{
		swap(&*a);
		swap(&*b);
		ft_putstr_fd("ss\n", 1);
	}
}

void	sa(t_list **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{
	swap(b);
	write(1, "sb\n", 3);
}

//reverse rotate:
void		reverse_rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;
	
	tmp = *lst;
	tmp2 = *lst;
	while (tmp->next->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp2 = tmp->next;
	tmp->next = NULL;
	tmp2->next = *lst;
	*lst = tmp2;
	relative_position(*lst);
}

void	double_reverse_rotate(t_list **a, t_list **b)
{
	if (*a && *b && (*a)->next && (*b)->next)
	{
		reverse_rotate(&*a);
		reverse_rotate(&*b);
		ft_putstr_fd("rrr\n", 1);
	}
}

void	rrb(t_list **b)
{
	reverse_rotate(b);
	write(1, "rrb\n", 4);
}

void	rra(t_list **a)
{
	reverse_rotate(a);
	write(1, "rra\n", 4);
}

//rotate
void		rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;
	
	tmp = *lst;
	tmp2 = *lst;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = tmp2;
	*lst = tmp2->next;
	tmp2->next = NULL;
	relative_position(*lst);
}

void	ra(t_list **a)
{
	rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	rotate(b);
	write(1, "rb\n", 3);
}

void	double_rotate(t_list **a, t_list **b)
{
	if (*a && *b && (*a)->next && (*b)->next)
	{
		rotate(&*a);
		rotate(&*b);
		ft_putstr_fd("rr\n", 1);
	}
}
// push:
void	push(t_list	**src, t_list	**dst)
{
	t_list	*cur;

	if (*src)
	{
		cur = *src;
		*src = (*src)->next;
		cur->next = *dst;
		*dst = cur;
		(*dst)->bson = 0;
		(*dst)->b = 0;	
	}
	positionize(&*src);
	positionize(&*dst);
}

void	pa(t_list **a, t_list **b)
{
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	if(*a == NULL)
		return ;
	push(a, b);
	write(1, "pb\n", 3);
}
