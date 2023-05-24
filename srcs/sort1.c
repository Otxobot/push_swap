/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:48:50 by abasante          #+#    #+#             */
/*   Updated: 2023/05/24 15:51:51 by abasante         ###   ########.fr       */
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
		if (((*a)->number > (*a)->next->number) && ((*a)->next->number < (*a)->next->next->number) && ((*a)->number < (*a)->next->next->number) )
		{
			printf("case 1:\n");
			sa(a);
		}
		//case 2:
		else if (((*a)->number > (*a)->next->number) && ((*a)->next->number > (*a)->next->next->number) && ((*a)->number > (*a)->next->next->number))
		{
			printf("case 2:\n");
			sa(a);
			rra(a);
		}
		//case 3:
		else if (((*a)->number > (*a)->next->number) && ((*a)->number > (*a)->next->next->number) && ((*a)->next->number < (*a)->next->next->number))
		{
			printf("case 3:\n");
			ra(a);
		}
		//case 4:
		else if (((*a)->next->number > (*a)->number) && ((*a)->next->number > (*a)->next->next->number) && ((*a)->number < (*a)->next->next->number))
		{
			printf("case 4:\n");
			sa(a);
			ra(a);
		}
		//case 5:
		else if (((*a)->next->next->number < (*a)->number) && ((*a)->next->next->number < (*a)->next->number) && ((*a)->number > (*a)->next->next->number))
		{
			printf("case 5:\n");
			rra(a);
		}
	}
}
