/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouali <ybouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:13:27 by ybouali           #+#    #+#             */
/*   Updated: 2021/12/19 08:30:25 by ybouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	swap(t_list **stack)
{
	t_list		*head;
	t_list		*tmp_next;
	int			value_t;
	int			index_t;

	if (ft_lst_size(*stack) < 2)
		return (-1);
	head = *stack;
	tmp_next = head->next;
	if (!head && !tmp_next)
		ft_error("Error");
	value_t = head->value;
	index_t = head->index;
	head->value = tmp_next->value;
	head->index = tmp_next->index;
	tmp_next->value = value_t;
	tmp_next->index = index_t;
	return (0);
}

int	swap_stack(t_list **stack, char c, int ch)
{
	if (c == 'a')
	{
		if (swap(stack) == -1)
			return (-1);
		if (ch == 1)
			ft_putendl_fd("sa", 1);
	}
	else if (c == 'b')
	{
		if (swap(stack) == -1)
			return (-1);
		if (ch == 1)
			ft_putendl_fd("sb", 1);
	}
	return (0);
}

int	swap_two_stack(t_list **stack_a, t_list **stack_b, int ch)
{
	if ((swap(stack_a) == -1) || (swap(stack_b) == -1))
		return (-1);
	if (ch == 1)
		ft_putendl_fd("ss", 1);
	return (0);
}

void	push(t_list **a, t_list **b)
{
	t_list *tmp;
	t_list *head_to;
	t_list *head_from;

	if (ft_lst_size(*b) == 0)
		return ;
	head_to = *a;
	head_from = *b;
	tmp = head_from;
	head_from = head_from->next;
	*b = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*a = head_to;	
	}
	else
	{
		tmp->next = head_to;
		*a = tmp;
	}
}