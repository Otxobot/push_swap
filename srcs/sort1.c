/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:12:21 by abasante          #+#    #+#             */
/*   Updated: 2023/07/19 12:31:56 by abasante         ###   ########.fr       */
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

//this func sorts and pushes the numbers from A to B
//until there are only three numbers left in A
void	sort_b_3(t_list **a, t_list **b)
{
	int size;
	int inditex;

	inditex = 0;
	size = ft_lstsize(*a);
	while (size > 3)
	{
		if ((*a)->index == inditex)
		{
			pb(a, b);
			size--;
			inditex++;
		}
		else if ((*a)->index != inditex)
		{
			ra(a);
		}
	}
}

void	five_numbers(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) > 3 && !check_list_sorted(*a))
	{
		sort_b_3(a, b);
		three_numbers(a);
	}
	while ((*b)->index != 0)
	{
		pa(a,b);
	}
	if ((*b)->index == 0)
		pa(a,b);
}
