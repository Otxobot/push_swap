/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:12:21 by abasante          #+#    #+#             */
/*   Updated: 2023/07/04 13:09:43 by abasante         ###   ########.fr       */
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
	int i;
	int size;
	int pbt;
	int inditex;

	inditex = 0;
	pbt = 0;
	i = 0;
	size = ft_lstsize(*a);
	while (size > 3)
	{
		if ((*a)->index == inditex)
		{
			pb(a, b);
			pbt++;
			inditex++;
			size--;
		}
		else if ((*a)->index != inditex)
		{
			ra(a);
		}
		i++;
	}
}

//void for now only, change it to t_list in .h when done. 
//maybe you don't have to return anything, not sure yet
void	sort_b(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) > 3 && !check_list_sorted(*a))
	{
		//printLinkedList(*a);
		sort_b_3(a, b);
		//printLinkedList(*a);
		//printLinkedList(*a);
	}
	if (!check_list_sorted(*a))
	{
		three_numbers(a);
		//printLinkedList(*a);	
	}
	while ((*b)->index != 0)
	{
		pa(a,b);
	}
	if ((*b)->index == 0)
		pa(a,b);
}
