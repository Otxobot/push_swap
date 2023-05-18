/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:37:42 by abasante          #+#    #+#             */
/*   Updated: 2023/05/18 17:50:16 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

//ft_lstnew returns a pointer to a new node 
//with the desired value inside it.
t_list	*ft_lstnew(int number)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->number = number;
	new->index = -1;
	new->next = NULL;
	return (new);
}

t_list	*ft_lstlast(t_list *head)
{
	t_list 	*tmp;

	tmp = head;
	if (!head)
		return (NULL);
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (tmp);
	}
	return (tmp);
}

//
void	ft_lstadd_back(t_list **stack, t_list *new)
{
	t_list	*tmp;
	
	tmp = ft_lstlast(*stack);
	if (!*stack)
	{
		*stack = new;
		printf("list is empty and this is the first node\n");
	}
	else
	{
		tmp->next = new;	
		printf("List is not empty\n");
	}
}

void	printlist(t_list **head)
{
	t_list	*current = *head;

	while (current != NULL)
	{
		printf("%d\n", current->number);
		current = current->next;
	}
}