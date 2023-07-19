/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:41:53 by abasante          #+#    #+#             */
/*   Updated: 2023/07/19 15:48:45 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/libft.h"

int		ft_putstr_fd(char *s)
{
	int i;
	int len;

	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		write (1, &s[i], 1);
		i++;
	}
	return (i);
}