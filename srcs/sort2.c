/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:12:21 by abasante          #+#    #+#             */
/*   Updated: 2023/05/29 13:08:08 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	three_numbers(t_list **a)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	while(check_order(a, 'a') == 1)
	{
		first = (*a);
		second = (*a)->next;
		third = (*a)->next->next;

		if (first->number > second->number && first->number < third->number)
			sa(a);
		else if (first->number > second->number && first->number > third->number)
			ra(a);
		else if (first->number < second->number && first->number > third->number)
			rra(a);
		else if (first->number < second->number && first->number < third->number)
			sa(a);
	}
}

void	medium_sort(t_list **a, t_list **b, int size)
{
	size = 0;
	printLinkedList(*a);
	pa(a, b);
	pa(a, b);
	sa(a);
	ra(a);
	pa(b, a);
	ra(a);
	pa(b, a);
	printLinkedList(*a);
}
