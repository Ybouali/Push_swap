/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouali <ybouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:12:47 by ybouali           #+#    #+#             */
/*   Updated: 2021/12/19 08:57:28 by ybouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	help_1(t_list **a, t_list **b)
{
	if (ft_lst_size(*a) <= 10)
		algo_short(a, b);
	else
		radix_sort(a, b);
}

int	main(int ac, char **av)
{
	t_list		**stack_a;
	t_list		**stack_b;

	if (ac > 2)
	{
		ft_check_dup_num(av);
		stack_a = (t_list **)malloc(sizeof(t_list));
		if (!stack_a)
			ft_error("Error");
		stack_b = (t_list **)malloc(sizeof(t_list));
		if (!stack_b)
			ft_error("Error");
		*stack_a = NULL;
		*stack_b = NULL;
		init(stack_a, ac, av);
		if (ft_check_sort(stack_a, ft_lst_size(*stack_a)) == 1)
		{
			free_stack(stack_a);
			free_stack(stack_b);
			return (0);
		}
		help_1(stack_a, stack_b);
		// ft_print_stack(*stack_a);
		// ft_printf("hh\n");
		// ft_print_stack(*stack_b);
		//while (1);
		free_stack(stack_a);
		free_stack(stack_b);
	}
	return (0);
}
