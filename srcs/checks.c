/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:36:48 by abasante          #+#    #+#             */
/*   Updated: 2023/05/16 13:38:11 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

int		check_if_repeat(char **input)
{
	int i = 1;

	while (*input)
	{
		while (input[i])
		{
			if (ft_atoi(*input) == ft_atoi(input[i]))
				return (0);
			i++;
		}
		i = 1;
		input++;
	}
	return (1);
}

int		check_elements(char	**av)
{
	int i = 0;
	int j = 0;
	
	while (av[i])
	{
		if (ft_atoi(&av[i][j]) > INT_MAX)
			return (0);
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]) == 0)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return(1);
}

// static int	ft_isnum(char *num)
// {
// 	int	i;

// 	i = 0;
// 	if (num[0] == '-')
// 		i++;
// 	while (num[i])
// 	{
// 		if (!ft_isdigit(num[i]))
// 			return (0);
// 		i++;
// 	}
// 	return (1);
// }

int 	is_sorted(char** av) 
{
    int i = 0;
    while (av[i+1] != NULL) 
	{
        int num1 = atoi(av[i]);
        int num2 = atoi(av[i+1]);
        if (num1 > num2) 
		{
            return 1;
        }
        i++;
    }
    return 0;
}
