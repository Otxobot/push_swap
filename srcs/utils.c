/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otxoboy <otxoboy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:37:42 by abasante          #+#    #+#             */
/*   Updated: 2023/07/10 19:53:34 by otxoboy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

//ft_lstnew returns a pointer to a new node 
//with the desired value inside that node.
t_list	*ft_lstnew(int number)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
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

int ft_lstsize(t_list *lst)
{
	t_list 	*tmp;
    int i = 0;
    
	tmp = lst;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        i++;
    }
    return (i);
}

t_list	*find(t_list *node, int bson)
{
	while (node)
	{
		if (node->bson == bson)
			return (node);
		node = node->next;
	}
	return (0);
}

t_list	*find_s(t_list *node, int zero)
{
	while (node)
	{
		if (node->index == zero)
			return (node);
		node = node->next;
	}
	return (0);
}

t_list	*find_b(t_list *node, int max)
{
	while (node)
	{
		if (node->index == max)
			return (node);
		node = node->next;
	}
	return (0);
}

int	biggest_index(t_list *node)
{
	int b_index = node->index;

	while (node)
	{
		if ((node)->index > b_index)
			b_index = node->index;
		node = node->next;
	}
	return (b_index);
}

void	printLinkedList(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		printf("node:\n");
		printf(" --\n");
		printf("|%d|\n", tmp->number);
		printf(" --\n index:%d\n\n", tmp->index);
		tmp = tmp->next;
	}
	printf("linked list finished\n");
}
