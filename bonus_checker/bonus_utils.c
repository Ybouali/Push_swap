/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouali <ybouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 13:49:47 by ybouali           #+#    #+#             */
/*   Updated: 2021/12/18 23:34:41 by ybouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	opera(t_list **stack_a, t_list **stack_b, char *s)
{
	if (ft_strncmp("rra", s, 3) == 0)
		rr_stack(stack_a, 'a', 0);
	else if (ft_strncmp("rrb", s, 3) == 0)
		rr_stack(stack_b, 'b', 0);
	else if (ft_strncmp("rrr", s, 3) == 0)
		rotate_two_stack(stack_a, stack_b, 0);
	else if (ft_strncmp("ra", s, 2) == 0)
		rotate_stack(stack_a, 'a', 0);
	else if (ft_strncmp("rb", s, 2) == 0)
		rotate_stack(stack_b, 'b', 0);
	else if (ft_strncmp("sa", s, 2) == 0)
		swap_stack(stack_a, 'a', 0);
	else if (ft_strncmp("sb", s, 2) == 0)
		swap_stack(stack_b, 'b', 0);
	else if (ft_strncmp("ss", s, 2) == 0)
		swap_two_stack(stack_a, stack_b, 0);
	else if (ft_strncmp("pa", s, 2) == 0)
		push_stack(stack_a, stack_b, 'a', 0);
	else if (ft_strncmp("pb", s, 2) == 0)
		push_stack(stack_a, stack_b, 'b', 0);
}
