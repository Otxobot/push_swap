/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:37:42 by abasante          #+#    #+#             */
/*   Updated: 2023/05/22 18:12:27 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

//ft_lstnew returns a pointer to a new node 
//with the desired value inside that node.
t_list	*ft_lstnew(int number)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
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
	{
		return (NULL);	
	}
	while (tmp->next != NULL)
	{
		//printf("enters here\n");
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (tmp);
	}
	return (tmp);
}

void	ft_lstadd_back(t_list **stack, t_list *new)
{
	t_list	*tmp;
	
	if (*stack != NULL)
	{
		tmp = ft_lstlast(*stack);
		tmp->next = new;
		new->next = NULL;
	}
	else
	{
		//printf("we set the first node\n");
		*stack = new;
		(*stack)->next = NULL;
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

void	printLinkedList(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->number);
		//ft_putnbr_fd(tmp->number, 1);
		ft_putendl_fd("", 1);
		tmp = tmp->next;
	}
}