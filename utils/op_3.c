/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouali <ybouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:43:03 by ybouali           #+#    #+#             */
/*   Updated: 2021/12/19 06:11:30 by ybouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	rr_stack(t_list **stack, char c, int ch)
{
	if (c == 'a')
	{
		if (reverse_rotate(stack) == -1)
			return (-1);
		if (ch == 1)
			ft_putendl_fd("rra", 1);
	}
	else if (c == 'b')
	{
		if (reverse_rotate(stack) == -1)
			return (-1);
		if (ch == 1)
			ft_putendl_fd("rrb", 1);
	}
	return (0);
}

int	reverse_rotate_two_stack(t_list **a, t_list **b, int ch)
{
	if ((rr_stack(a, 'a', 1) == -1) || (rr_stack(b, 'b', 1) == -1))
		return (-1);
	if (ch == 1)
		ft_putendl_fd("rrr", 1);
	return (0);
}

void	ft_print_stack(t_list *head)
{
	t_list	*tmp;

	if (head == NULL)
		ft_printf("STACK IS NULL\n");
	tmp = NULL;
	tmp = head;
	while (tmp)
	{
		ft_printf("value :>%d ** index = %d\n", tmp->value, tmp->index);
		tmp = tmp->next;
	}
}
