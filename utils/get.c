/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouali <ybouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:22:54 by ybouali           #+#    #+#             */
/*   Updated: 2021/12/18 21:16:01 by ybouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*get_next_min(t_list **stack)
{
	t_list		*head;
	t_list		*min;
	int			has_min;

	min = NULL;
	has_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!has_min || head->value < min->value))
			{
				min = head;
				has_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	index_stack(t_list **stack)
{
	t_list		*head;
	int			index;

	index = 0;
	head = get_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}

int	get_max_bits(t_list **stack)
{
	t_list		*head;
	int			max;
	int			m_bits;

	head = *stack;
	max = head->index;
	m_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> m_bits) != 0)
		m_bits++;
	return (m_bits);
}

int	get_min(t_list *head)
{
	int	min;

	min = head->value;
	while (head)
	{
		if (head->value < min)
			min = head->value;
		head = head->next;
	}
	return (min);
}
