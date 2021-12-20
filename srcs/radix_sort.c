/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouali <ybouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:57:13 by ybouali           #+#    #+#             */
/*   Updated: 2021/12/19 08:36:19 by ybouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list		*head_a;
	int			i;
	int			len;
	int			m_bits;
	int			j;

	i = 0;
	head_a = *stack_a;
	len = ft_lst_size(head_a);
	m_bits = get_max_bits(&head_a);
	while (i < m_bits)
	{
		j = 0;
		while (j++ < len)
		{
			head_a = *stack_a;
			if (((head_a->index >> i) & 1) == 1)
				rotate_stack(stack_a, 'a', 1);
			else if (ft_check_sort(&head_a, ft_lst_size(head_a)) == 0)
				push_stack(stack_a, stack_b, 'b', 1);	
		}
		while (ft_lst_size(*stack_b) != 0)
			push_stack(stack_a, stack_b, 'a', 1);
		i++;
	}
}
