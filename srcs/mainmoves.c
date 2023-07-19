/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainmoves.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 15:51:48 by abasante          #+#    #+#             */
/*   Updated: 2023/07/19 16:07:52 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

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

void	rotate(t_list **lst)
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
