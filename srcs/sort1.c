/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:48:50 by abasante          #+#    #+#             */
/*   Updated: 2023/05/24 13:26:06 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	easy_sort(t_list **a, t_list **b, int size)
{
	b = NULL;

	if (size == 2)
	{
		if ((*a)->number > (*a)->next->number)
		{
			sa(a);
			printf("after sa:\n");
			printLinkedList(*a);
		}
	}
	else if (size == 3)
	{
		//case 1 sa:
		if (((*a)->number > (*a)->next->number) && ((*a)->next->number) < (*a)->next->next->number)
		{
			sa(a);
		}
		else if (((*a)->number > (*a)->next->number) && ((*a)->number > (*a)->next->next->number))
		{
			sa(a);
			rra(a);
		}
	}
}
