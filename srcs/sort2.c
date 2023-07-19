/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abasante <abasante@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 14:25:48 by abasante          #+#    #+#             */
/*   Updated: 2023/07/19 15:24:10 by abasante         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/push_swap.h"

void	big_numbers(t_list **a, t_list **b)
{
	int	mv_a;
	int	mv_b;

	while (*a)
	{
		cost_to_place(*a, *b);
		mv_a = select1(*a, *b)->relp;
		mv_b = select1(*a, *b)->b;
		while (mv_a > 0 && mv_b > 0 && mv_a-- && mv_b--)
			double_rotate(&*a, &*b);
		while (mv_a < 0 && mv_b < 0 && mv_a++ && mv_b++)
			double_reverse_rotate(&*a, &*b);
		while (mv_a < 0 && mv_a++)
			rra(&*a);
		while (mv_a > 0 && mv_a--)
			ra(&*a);
		while (mv_b < 0 && mv_b++)
			rrb(&*b);
		while (mv_b > 0 && mv_b--)
			rb(&*b);
        pb(a, b);
	}
	while (*b)
        pa(a, b);
	rotate_s_top(&*a);
}

void	cost_to_place(t_list *src, t_list *dst)
{
	t_list	*temp;

	temp = dst;
	while (src && dst && dst->next)
	{
		if (src->number > find(dst, 1)->number \
		|| src->number < find(dst, -1)->number)
			src->b = find(dst, 1)->relp;
		else
		{
			if (src->number < ft_lstlast(dst)->number && src->number > dst->number)
				src->b = 0;
			while (dst->next)
			{
				if (src->number < dst->number \
				&& src->number > dst->next->number)
					src->b = dst->next->relp;
				dst = dst->next;
			}
			dst = temp;
		}
		src = src->next;
	}
}

t_list	*select1(t_list *a, t_list *b)
{
	t_list	*selected;
	int		moves;

	moves = absolute(a->relp) + absolute(a->b);
	selected = a;
	while (a)
	{
		if (absolute(a->relp) + absolute(a->b) == moves)
		{
			if (b && ((find(b, 1)->relp > 0 && a->relp > 0) \
			|| (find(b, 1)->relp < 0 && a->relp < 0)))
            {
                selected = a;
            }
			if (b && ((a->relp < 0 && a->b < 0) || (a->relp > 0 && a->b > 0)) \
			&& absolute(a->relp) > absolute(a->b))
            {
                selected = a;
            }
		}
		if (absolute(a->relp) + absolute(a->b) < moves)
		{
			moves = absolute(a->relp) + absolute(a->b);
			selected = a;
		}
		a = a->next;
	}
	return (selected);
}
