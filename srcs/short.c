/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouali <ybouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 03:51:26 by ybouali           #+#    #+#             */
/*   Updated: 2021/12/19 08:54:51 by ybouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	case_10(t_list **a, t_list **b)
{
	int			i;
	int			min;
	t_list		*tmp_1;

	i = ft_lst_size(*a);
	while (i > 0)
	{
		min = get_min(*a);
		tmp_1 = (*a)->next;
		if ((*a)->value != min && tmp_1 && tmp_1->value == min)
			swap_stack(a, 'a', 1);
		while (min != (*a)->value)
			rotate_stack(a, 'a', 1);
		if (ft_check_sort(a, ft_lst_size(*a)) == 1)
			break ;
		if (min == (*a)->value)
		{
			push_stack(a, b, 'b', 1);
			i--;
		}
	}
}

static void	help_1(t_list **a, int c)
{
	if (c == 1)
	{
		swap_stack(a, 'a', 1);
		rr_stack(a, 'a', 1);
	}
	else
	{
		swap_stack(a, 'a', 1);
		rotate_stack(a, 'a', 1);
	}
}

static void	case_3(t_list **a, int len)
{
	t_list		*bottom;
	int			min;

	bottom = NULL;
	bottom = ft_lstlast(*a);
	min = get_min(*a);
	while (ft_check_sort(a, len) == 0)
	{
		if ((*a)->value < (*a)->next->value && bottom->value == min)
			rotate_stack(a, 'a', 1);
		else if ((*a)->value > (*a)->next->value && bottom->value == min)
			help_1(a, 1);
		else if ((*a)->next->value == min)
		{
			if ((*a)->value < bottom->value)
				swap_stack(a, 'a', 1);
			else if ((*a)->value > bottom->value)
				rr_stack(a, 'a', 1);
		}
		else if ((*a)->value == min && (*a)->next->value > bottom->value)
			help_1(a, 0);
	}
}

void	algo_short(t_list **a, t_list **b)
{
	if (ft_lst_size(*a) == 2 && (*a)->value > (*a)->next->value)
		swap_stack(a, 'a', 1);
	else if (ft_lst_size(*a) <= 3)
		case_3(a, ft_lst_size(*a));
	else if (ft_lst_size(*a) > 3 && !ft_check_sort(a, ft_lst_size(*a)))
	{
		case_10(a, b);
		while (ft_lst_size(*b) != 0)
			push_stack(a, b, 'a', 1);
	}
}