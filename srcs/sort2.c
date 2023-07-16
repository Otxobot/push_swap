/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otxoboy <otxoboy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:25:48 by abasante          #+#    #+#             */
/*   Updated: 2023/07/16 12:37:30 by otxoboy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	big_numbers(t_list **a, t_list **b)
{
	int amv;
    int bmv;

    while (*a)
    {
        insertion_place(*a, *b);
        amv = ft_select(*a, *b)->relp;
        bmv = ft_select(*a, *b)->b;
        while (amv > 0 && bmv > 0 && amv-- && bmv--)
            double_rotate(&*a, &*b);
        while (amv < 0 && bmv < 0 && amv++ && bmv++)
            double_reverse_rotate(&*a, &*b);
        while (amv < 0 && amv++)
            rra(&*a);
        while (amv > 0 && amv--)
            ra(&*a);
        while (bmv < 0 && bmv++)
            rrb(&*b);
        while (bmv > 0 && bmv--)
            rb(&*b);
        pb(a, b);
        //ft_print_lists(*a, *b);
    }
    while (*b)
        pa(a, b);
    repos_list(&*a);
}

void    insertion_place(t_list *src, t_list *dst)
{
    t_list *temp = dst;

    while (src && dst && dst->next)
    {
        if (src->number > find(dst, 1)->number || src->number < find(dst, -1)->number)
        {
            src->b = find(dst, 1)->relp;
        }
        else
        {
            if (src->number < ft_lstlast(dst)->number && src->number > dst->number)
            {
                src->b = 0;
            }
            while (dst->next)
            {
                if (src->number < dst->number && src->number > dst->next->number)
                {
                    src->b = dst->next->relp;
                }
                dst = dst->next;
            }
            dst = temp;
        }
        src = src->next;
    }
}

t_list	*ft_select(t_list *lst, t_list *b)
{
	t_list	*selected;
	int		moves;

	moves = absolute(lst->relp) + absolute(lst->b);
	selected = lst;
	while (lst)
	{
		if (absolute(lst->relp) + absolute(lst->b) == moves)
		{
			if (b && ((find(b, 1)->relp > 0 && lst->relp > 0) \
			|| (find(b, 1)->relp < 0 && lst->relp < 0)))
            {
                selected = lst;
            }
			if (b && ((lst->relp < 0 && lst->b < 0) || (lst->relp > 0 && lst->b > 0)) \
			&& absolute(lst->relp) > absolute(lst->b))
            {
                selected = lst;
            }
		}
		if (absolute(lst->relp) + absolute(lst->b) < moves)
		{
			moves = absolute(lst->relp) + absolute(lst->b);
			selected = lst;
		}
		lst = lst->next;
	}
	return (selected);
}
