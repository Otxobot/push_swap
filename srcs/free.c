/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:39:29 by abasante          #+#    #+#             */
/*   Updated: 2023/07/06 11:55:01 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	free_split(char **input)
{
	int i = 0;

	while (input[i])
	{
		free(input[i]);
		i++;
	}
	free(input);
}

void	free_list(t_list *lst)
{
	t_list *tmp;

	
	while (lst)
	{
		tmp = lst->next;
		free(lst);
		lst = tmp;
	}
}
