/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:50:51 by abasante          #+#    #+#             */
/*   Updated: 2023/07/06 13:07:46 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	start_push_swap(char **input)
{
	// t_list **a;
	// t_list **b;

	// a = malloc(sizeof(t_list*));
	// b = malloc(sizeof(t_list*));
	// *b = NULL;
	// *a = NULL;
	t_list *a;
	t_list *b;

	b = NULL;
	create_linked_list(&a, input);
	sort(&a, &b);
}

void	create_linked_list(t_list **stack, char **input)
{
	t_list	*new;
	t_list	*temp;
	int i = 0;

	while (input[i])
	{
		new = ft_lstnew(ft_atoi(input[i]));//creates a pointer to a new node with the desired value inside
		ft_lstadd_back(stack, new);
		i++;
	}
	index_stack(stack);
	temp = *stack;
	while (temp)
	{
		temp->list_name = 'a';
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

void	sort(t_list **a, t_list **b)
{
	//first create a function that checks the size of the linked list, 
	//and then we can use that to determine which sorting algorithm to use,
	//if the list is less than 5 use small sorting algorithm, 
	//if the list is more than 5 use the big sorting algorithm.
	int size = ft_lstsize(*a);
	if (size == 2)
		sa(a);
	else if (size == 3)
		three_numbers(a);
	else
	{
		sort_big(a, b);
	}
	free_list(*a);
}
