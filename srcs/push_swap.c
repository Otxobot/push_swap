/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:50:51 by abasante          #+#    #+#             */
/*   Updated: 2023/05/23 11:07:28 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	start_push_swap(char **input)
{
	t_list **a;
	t_list **b;

	a = malloc(sizeof(t_list));
	b = malloc(sizeof(t_list));
	*b = NULL;
	*a = NULL;
	create_linked_list(a, input);
}

void	create_linked_list(t_list **stack, char **input)
{
	t_list	*new;
	int i = 0;
	int l = 0;

	while (input[i])
	{
		new = ft_lstnew(ft_atoi(input[i]), l++);//creates a pointer to a new node with the desired value inside
		ft_lstadd_back(stack, new);
		i++;
	}
	printLinkedList(*stack);
}
