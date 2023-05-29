/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:12:21 by abasante          #+#    #+#             */
/*   Updated: 2023/05/29 16:56:46 by abasante         ###   ########.fr       */
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

void	move_a(t_list **lst, int move)
{
	//if move is positive, rotate if negative, rotate backwards

	if (move > 0)
	{
		while (move > 0)
		{
			ra(lst);
			move--;
		}
	}
	else if (move < 0)
	{
		while (move < 0)
		{
			rra(lst);
			move++;
		}
	}
}

int		cost_to_a(t_list *a, int nbr)
{
	/* Cost of moving b number in stack A. From the middle of the stack up it is
positive and from the middle of the stack down it is negative. Used to know
if whether to use "rotate" or "rotate backwards". */

	int		cost;
	int		i;
	t_list	*tmp;

	cost = 0;
	i = 0;
	tmp = a;
	while (tmp != NULL)
	{
		if (tmp->index == nbr)
			break ;
		i++;
		tmp = tmp->next;
	}
	if (i <= ft_lstsize(a) / 2)
		cost = i;
	else
		cost = i - ft_lstsize(a);
	return (cost);
}

void	send_a(t_list **a, t_list **b)
{
	int cost = 0;

	while (*b != NULL)
	{
		cost = cost_to_a(*a, (*b)->number);
		move_a(a, cost);
		pa(b, a);
	}
}

void	order_a(t_list **lst_a)
{
	t_list	*curr;
	int		len;
	int		i;

	curr = *lst_a;
	len = ft_lstsize(*lst_a);
	i = 0;
	while (curr->number != check_max_min(*lst_a, (*lst_a)->number, 'm'))
	{
		i++;
		curr = curr->next;
	}
	if (i > len / 2)
		i = i - len;
	move_a(lst_a, i);
}
void	medium_sort(t_list **a, t_list **b)
{
	printLinkedList(*a);
	pa(a, b);
	pa(a, b);
	printf("------------------\n");
	three_numbers(a);
	send_a(a, b);
	order_a(a);
	printLinkedList(*a);
}
