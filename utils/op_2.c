/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouali <ybouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:13:56 by ybouali           #+#    #+#             */
/*   Updated: 2021/12/19 08:35:28 by ybouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_stack(t_list **stack_a, t_list **stack_b, char c, int ch)
{
	if (c == 'a')
	{
		push(stack_a, stack_b);
		if (ch == 1)
			ft_putendl_fd("pa", 1);
	}
	else if (c == 'b')
	{
		push(stack_b, stack_a);
		if (ch == 1)
			ft_putendl_fd("pb", 1);
	}
}

int	rotate(t_list **stack)
{
	t_list		*head;
	t_list		*bottom;

	if (ft_lst_size(*stack) < 2)
		return (-1);
	head = *stack;
	bottom = ft_lstlast(head);
	*stack = head->next;
	head->next = NULL;
	bottom->next = head;
	return (0);
}

int	rotate_stack(t_list **stack, char c, int ch)
{
	if (c == 'a')
	{
		if (rotate(stack) == -1)
			return (-1);
		if (ch == 1)
			ft_putendl_fd("ra", 1);
	}
	else if (c == 'b')
	{
		if (rotate(stack) == -1)
			return (-1);
		if (ch == 1)
			ft_putendl_fd("rb", 1);
	}
	return (0);
}

int	rotate_two_stack(t_list **stack_a, t_list **stack_b, int ch)
{
	if ((rotate_stack(stack_a, 'a', 1) == -1) \
			|| (rotate_stack(stack_b, 'b', 1) == -1))
		return (-1);
	if (ch == 1)
		ft_putendl_fd("rr", 1);
	return (0);
}

int	reverse_rotate(t_list **stack)
{
	t_list		*head;
	t_list		*bottom;

	if (ft_lst_size(*stack) < 2)
		return (-1);
	head = *stack;
	bottom = ft_lstlast(*stack);
	while (head)
	{
		if (head->next->next == NULL)
		{
			head->next = NULL;
			break ;
		}
		head = head->next;
	}
	bottom->next = *stack;
	*stack = bottom;
	return (0);
}
