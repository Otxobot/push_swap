/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:12:21 by abasante          #+#    #+#             */
/*   Updated: 2023/05/29 13:24:16 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	medium_sort(t_list **a, t_list **b, int size)
{
	size = 0;
	printLinkedList(*a);
	pa(a, b);
	write (1, "pa\n", 3);
	pa(a, b);
	write (1, "pa\n", 3);
	sa(a);
	write(1, "sa\n", 3);
	ra(a);
	write (1, "ra\n", 3);
	pa(b, a);
	write (1, "pa\n", 3);
	ra(a);
	write (1, "ra\n", 3);
	pa(b, a);
	write (1, "pa\n", 3);
	printLinkedList(*a);
}
