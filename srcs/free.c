/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otxoboy <otxoboy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:39:29 by abasante          #+#    #+#             */
/*   Updated: 2023/07/17 13:33:46 by otxoboy          ###   ########.fr       */
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

void free_list(t_list *stack)
{
    t_list *temp;

    while (stack)
    {
        temp = stack;
        stack = stack->next;
        free(temp);
    }
}