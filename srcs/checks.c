/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otxoboy <otxoboy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:36:48 by abasante          #+#    #+#             */
/*   Updated: 2023/07/17 17:07:04 by otxoboy          ###   ########.fr       */
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

int	ft_check_maxint(char **argv)
{
	if (ft_atoil(*argv) > 2147483647)
		return (0);
	if (ft_atoil(*argv) < -2147483648)
		return (0);
	return (1);
}

int		check_elements(char	**av)
{
	int i = 0;
	int j = 0;
	
	while (av[i])
	{
		if (!ft_check_maxint(&av[i]))
			return (0);
		// if (av[i][j] == '-')
		// 	i++;
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

int 	is_sorted(char** av) 
{
    int i = 0;
    while (av[i+1] != NULL) 
	{
        int num1 = ft_atoi(av[i]);
        int num2 = ft_atoi(av[i+1]);
        if (num1 > num2) 
		{
            return (1);
        }
        i++;
    }
    return 0;
}

int		check_list_sorted(t_list *a)
{
	int 	i;

	i = a->number;
	while (a)
	{
		if (i > a->number)
			return (0);
		i = a->number;
		a = a->next;
	}
	return (1);
}

int		check_order(t_list **lst, char a)
{
	t_list	*cur;
	t_list 	*next;

	cur = *lst;
	next = (*lst)->next;
	while (next != NULL)
	{
		if (cur->number > next->number && a == 'a')
			return (1);
		if (cur->number < next->number && a == 'b')
			return (1);
		cur = cur->next;
		next = next->next;
	}
	return (0);
}
