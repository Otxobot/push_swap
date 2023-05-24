/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:48:50 by abasante          #+#    #+#             */
/*   Updated: 2023/05/24 11:43:44 by abasante         ###   ########.fr       */
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
		
	}
}
