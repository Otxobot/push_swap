/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otxoboy <otxoboy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 17:21:51 by abasante          #+#    #+#             */
/*   Updated: 2023/07/10 11:40:02 by otxoboy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	max_and_min(t_list *lst)
{
	int		max;
	int		min;
	t_list	*tmp;

	max = lst->number;
	min = lst->number;
	tmp = lst;

	while (lst)
	{
		if (lst->number > max)
			max = lst->number;
		if (lst->number < min)
			min = lst->number;
		lst = lst->next;
	}
	while (tmp)
	{
		if (tmp->number == max)
			tmp->bson = 1;
		else if (tmp->number == min)
			tmp->bson = -1;
		else
			tmp->bson = 0;
		tmp = tmp->next;
	}
}

void	relative_position(t_list *lst)
{
	int i;
	int size;

	i = 0;
	size = ft_lstsize(lst);
	if (size == 1)
		lst->relp = 0;
	while (lst->next)
	{
		if (i <= size / 2)
			lst->relp = i;
		else
			lst->relp = (size - i) * -1;
		i++;
		lst = lst->next;
		lst->relp = -1;
	}
}
