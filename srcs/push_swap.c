/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:50:51 by abasante          #+#    #+#             */
/*   Updated: 2023/05/18 12:46:50 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void create_linked_list(char **input) 
{
	t_list	**a;
	t_list	**b;
	t_list	*new;
	int i = 0;

	a = (t_list **)malloc(sizeof(t_list));
	b = (t_list **)malloc(sizeof(t_list));
	*a = NULL;
	*b = NULL;
	
	while (input[i])
	{
		new = ft_lstnew(ft_atoi(input[i]));
		ft_lstadd_back(a, new);
		i++;
	}
}

// void	push_swap(char **input, int	size)
// {}