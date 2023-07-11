/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:50:51 by abasante          #+#    #+#             */
/*   Updated: 2023/07/11 14:26:58 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	start_push_swap(char **input)
{
	t_list *a;
	t_list *b;

	b = NULL;
	create_linked_list(&a, input);
	int size = ft_lstsize(a);
	//printf("list size: %d\n", size);
	if (size == 2)
		sa(&a);
	else if (size == 3)
		three_numbers(&a);
	else if (size <= 5 && size > 1)
	{
		//printLinkedList(a);
		five_numbers(&a, &b);
		//printLinkedList(a);
	}
	else
	{
		big_numbers(&a, &b);
	}
	free_list(a);
}

void	create_linked_list(t_list **stack, char **input)
{
	t_list	*temp;
	int i = 1;

	*stack = ft_lstnew(ft_atoi(*input));
	while (input[i])
	{
		ft_lstadd_back(&*stack, ft_lstnew(ft_atoi(input[i])));
		i++;
	}
	index_stack(stack);
	temp = *stack;
	while (temp)
	{
		temp->b = 0;
		temp = temp->next;
	}
	max_and_min(*stack);
	relative_position(*stack);
}

t_list	*get_min(t_list  **stack)
{
	t_list	*head;
	t_list	*smallest_node;
	int		found_min;

	smallest_node = NULL;
	found_min = 0; //1 == yes 0 == no
	head = *stack;

	if (head != NULL)
	{
		while (head != NULL)
		{
			if ((head->index == -1) && (found_min == 0 || head->number < smallest_node->number))
			{
				smallest_node = head;
				found_min = 1;
			}
			head = head->next;
		}
	}
	return (smallest_node);
}

void	index_stack(t_list	**stack)
{
	t_list	*head;
	int		index;

	index = 0;
	//finds the node with the smallest number:
	head = get_min(stack);
	while (head != NULL)
	{
		head->index = index++;
		head = get_min(stack);
	}
}
