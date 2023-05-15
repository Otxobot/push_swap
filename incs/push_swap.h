/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:21:01 by abasante          #+#    #+#             */
/*   Updated: 2023/05/15 12:19:02 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PUSH_SWAP_H
# define	PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#include <limits.h>

int			check_if_repeat(char **av);
int			check_args(char **input);
// static int	ft_isnum(char *num);
int			check_elements(char	**av);
int			is_sorted(char **av);

#endif