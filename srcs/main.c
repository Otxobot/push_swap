/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:20:20 by abasante          #+#    #+#             */
/*   Updated: 2023/05/16 16:24:41 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int main(int ac, char **av)
{
	char	**input;
	//int 	size = 0;

	if (ac < 2)
		return (0);
	if (ac == 2)
	{
		input = ft_split(av[1], ' ');
		if (!check_if_repeat(input) || !check_elements(input))
		{
			free_split(input);
			ft_putstr_fd("Error", 0);
			return(-1);
		}
		if (!is_sorted(input))
		{
			free_split(input);
			ft_putstr_fd("Error", 0);
			return(0);
		}
		// while (input[size])
		// 	size++;
		//push_swap(input, size);
	}
	else
	{
		if (!check_if_repeat(av + 1) || !check_elements(av + 1))
		{
			printf("There is a repeated number or the arguments are wrong\n");
			ft_putstr_fd("Error", 0);
			return(-1);
		}
		if (!is_sorted(av + 1))
		{
			printf("Arguments are already sorted\n");
			ft_putstr_fd("Error", 0);
			return (0);
		}
	}
	//system("leaks push_swap");
	return (0);
}