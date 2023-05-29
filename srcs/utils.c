/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:37:42 by abasante          #+#    #+#             */
/*   Updated: 2023/05/29 15:21:27 by abasante         ###   ########.fr       */
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

int ft_lstsize(t_list *lst)
{
    int i = 0;
    
    while (lst != NULL)
    {
        lst = lst->next;
        i++;
    }
    return (i);
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

int		cost_in_a(t_list *a, int nbr)
{
	/* Cost of moving b number in stack A. From the middle of the stack up it is
positive and from the middle of the stack down it is negative. Used to know
if whether to use "rotate" or "rotate backwards". */

	int		cost;
	int		i;
	t_list	*tmp;

	cost = 0;
	i = 0;
	tmp = a;
	while (tmp != NULL)
	{
		if (tmp->index == nbr)
			break ;
		i++;
		tmp = tmp->next;
	}
	if (i <= ft_lstsize(a) / 2)
		cost = i;
	else
		cost = i - ft_lstsize(a);
	return (cost);
}

void	move_a(t_list **lst, int move)
{
	//if move is positive, rotate if negative, rotate backwards

	if (move > 0)
	{
		while (move > 0)
		{
			ra(lst);
			move--;
		}
	}
	else if (move < 0)
	{
		while (move < 0)
		{
			rra(lst);
			move++;
		}
	}
}

void	send_a(t_list **a, t_list **b)
{
	int cost = 0;

	while (*b != NULL)
	{
		cost = cost_in_a(*a, (*b)->number);
		move_a(a, cost);
		pa(b, a);
	}
}

void	order_a(t_list **a)
{
	
}