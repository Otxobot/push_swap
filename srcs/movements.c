/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 16:08:23 by abasante          #+#    #+#             */
/*   Updated: 2023/05/24 11:42:37 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int	sa(t_list **a)
{
	//swap the first 2 elements at the top of stack a.
	t_list	*tmp;
	t_list	*tmp2;

	if (!(*a) || !(*a)->next)
		return (0);
	tmp = *a;
	tmp2 = tmp->next;
	tmp->next = tmp2->next;
	tmp2->next = tmp;
	*a = tmp2;
	return (1);
}
