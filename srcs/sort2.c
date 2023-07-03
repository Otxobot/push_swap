/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:12:21 by abasante          #+#    #+#             */
/*   Updated: 2023/07/03 12:43:02 by abasante         ###   ########.fr       */
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

// void	sort_till_three_left_in_a(t_list **a, t_list **b)
// {
// 	int	i;
// 	t_list *tmp;

// 	while (ft_lstsize(*a) > 3)
// 	{
// 		tmp = *a;
// 		i = ft_rotate_ab(a, b);
// 	}
// }

// void	medium_sort(t_list **a, t_list **b)
// {
// 	printLinkedList(*a);
// 	printf("------------------\n");
// 	pb(a, b);
// 	pb(a, b);
// 	printLinkedList(*b);
// 	printLinkedList(*a);
// 	printf("----three numbers:\n");
// 	three_numbers(a);
// 	printLinkedList(*a);
// }

// void	medium_sort(t_list **a, t_list **b)
// {
// 	if (ft_lstsize(*a) > 3)
// 		pb(a, b);
// 	if (ft_lstsize(*a) > 3)
// 		pb(a, b);
// 	if (ft_lstsize(*a) > 3)
// 		sort_till_three_left_in_a(a, b);
// }
