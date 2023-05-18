/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:50:51 by abasante          #+#    #+#             */
/*   Updated: 2023/05/18 17:51:38 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	start_push_swap(char **input)
{
	t_list *a;
	t_list *b;

	b = NULL;
	create_linked_list(&a, input);
}

void create_linked_list(t_list **head, char **input) 
{
	t_list	*new;
	int i = 0;

	*head = ft_lstnew(ft_atoi(input[i]));
	printlist(head);
	i++;
	while (input[i])
	{
		new = ft_lstnew(ft_atoi(input[i]));//new node with desired value inside
		//printf("number inside:%d\n", new->number);
		ft_lstadd_back(head, new);
		i++;
	}
}

// void	push_swap(char **input, int	size)
// {}