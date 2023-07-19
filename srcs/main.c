/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:20:20 by abasante          #+#    #+#             */
/*   Updated: 2023/07/19 12:53:31 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int main(int ac, char **av)
{
	char	**input;

	if (ac < 2)
		return (0);
	if (ac == 2)
	{
		input = ft_split(av[1], ' ');
		if (!check_if_repeat(input) || !check_elements(input))
		{
			free_split(input);
			ft_putstr_fd("Error\n");
			return(0);
		}
		if (!is_sorted(input))
		{
			free_split(input);
			//ft_putstr_fd("Error: Arguments are already sorted\n", 2);
			return(0);
		}
		return (start_push_swap(input), free_split(input), 0);
	}
	else
	{
		if (!check_if_repeat(av + 1) || !check_elements(av + 1))
		{
			ft_putstr_fd("Error\n");
			return(0);
		}
		if (!is_sorted(av + 1))
		{
			return (0);
		}
		start_push_swap(av + 1);
	}
	return (0);
}
