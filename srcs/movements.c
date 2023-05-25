/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:08:23 by abasante          #+#    #+#             */
/*   Updated: 2023/05/25 11:42:55 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

//sa, swaps the first two numbers of the list.
void	sa(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *lst;
	tmp2 = tmp->next;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	*lst = tmp2;
}

//the last number in the linked list becomes the first one.
void	rra(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;
	
	if (!(*lst) || !(*lst)->next)
		return (0);
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
}

//the first number goes to the end of the linked list.
void	ra(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;
	
	if (!(*lst) || !(*lst)->next)
		return (0);
	tmp = *lst;
	tmp2 = *lst;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = tmp2;
	*lst = tmp2->next;
	tmp2->next = NULL;
}

void	pa(t_list	**lst, t_list	**dst)
{
	t_list	*cur;

	cur = *lst;
	*lst = (*lst)->next;
	cur->next = *dst;
	*dst = cur;
}