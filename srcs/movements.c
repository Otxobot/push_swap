/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:26:22 by abasante          #+#    #+#             */
/*   Updated: 2023/07/19 15:44:58 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

//swap:
void	swap(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *lst;
	tmp2 = tmp->next;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	*lst = tmp2;
	relative_position (*lst);
}

void	sa(t_list **a)
{
	swap (a);
	ft_putstr_fd ("sa\n");
}

void	sb(t_list **b)
{
	swap(b);
	ft_putstr_fd("sb\n");
}

//reverse rotate:
void	reverse_rotate(t_list **lst)
{
	t_list	*tmp;

	if ((*lst)->next)
	{
		tmp = *lst;
		tmp = ft_lstlast(tmp);
		tmp->next = *lst;
		*lst = tmp;
		while (tmp->next != *lst)
			tmp = tmp->next;
		tmp->next = NULL;
	}
	relative_position(*lst);
}

void	rrb(t_list **b)
{
	reverse_rotate(b);
	ft_putstr_fd("rrb\n");
}

void	rra(t_list **a)
{
	reverse_rotate(a);
	ft_putstr_fd("rra\n");
}

//rotate
void		rotate(t_list **lst)
{
	t_list	*tmp;
	
	if ((*lst)->next)
	{
		tmp = *lst;
		tmp = ft_lstlast(tmp);
		tmp->next = *lst;
		tmp = tmp->next;
		*lst = tmp->next;
		tmp->next = NULL;
	}
	relative_position(*lst);
}

void	ra(t_list **a)
{
	rotate(a);
	ft_putstr_fd("ra\n");
}

void	rb(t_list **b)
{
	rotate(b);
	ft_putstr_fd("rb\n");
}

// push:
void	push(t_list	**src, t_list	**dst)
{
	t_list	*temp;

	if (*src)
	{
		temp = *dst;
		*dst = *src;
		*src = (*src)->next;
		(*dst)->next = temp;
		(*dst)->bson = 0;
		(*dst)->b = 0;	
	}
	positionize(&*src);
	positionize(&*dst);
}

void	pa(t_list **a, t_list **b)
{
	push(b, a);
	ft_putstr_fd("pa\n");
}

void	pb(t_list **a, t_list **b)
{
	push(a, b);
	ft_putstr_fd("pb\n");
}
