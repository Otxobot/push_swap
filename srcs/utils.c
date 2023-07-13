/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otxoboy <otxoboy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:37:42 by abasante          #+#    #+#             */
/*   Updated: 2023/07/13 12:45:47 by otxoboy          ###   ########.fr       */
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
		return (NULL);	
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

void	ft_lstadd_back(t_list **stack, t_list *new)
{
	t_list	*tmp;

	tmp = ft_lstlast(*stack);
	if (!*stack)
		*stack = new;
	else
		tmp->next = new;
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

int	absolute(int num)
{
	if (num < 0)
		num *= -1;
	return (num);
}

void	finish(t_list **lst)
{
	if (find(*lst, -1)->relp > 0)
		while (find(*lst, -1)->relp != 0)
			rotate(&*lst);
	else if (find(*lst, -1)->relp < 0)
		while (find(*lst, -1)->relp != 0)
			rra(&*lst);
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
		printf(" --\n index:%d", tmp->index);
		printf("   \n relp: %d\n", tmp->relp);
		printf("   \n bson: %d\n", tmp->bson);
		printf("---------\n");
		tmp = tmp->next;
	}
	printf("linked list finished\n");
}
