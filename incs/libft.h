/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 09:23:47 by abasante          #+#    #+#             */
/*   Updated: 2023/05/12 09:58:59 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct      s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
int	    ft_atoi(const char *str);

#endif