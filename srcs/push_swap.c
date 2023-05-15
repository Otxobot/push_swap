/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:20:20 by abasante          #+#    #+#             */
/*   Updated: 2023/05/15 12:16:47 by abasante         ###   ########.fr       */
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
			ft_putstr_fd("Error", 0);
			return(-1);
		}
		if (!is_sorted(input))
		{
			
		}
	}
}