/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:36:48 by abasante          #+#    #+#             */
/*   Updated: 2023/05/12 09:55:18 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int		check_if_repeat(char **input)
{
	int i = 0;

	while (*input)
	{
		while (input[i])
		{
			if (ft_atoi(input) == ft_atoi(input[i]))
				return (0);
			i++;
		}
		i = 1;
		input++;
	}
	return (1);
}