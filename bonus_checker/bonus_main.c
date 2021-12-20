/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouali <ybouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 13:49:10 by ybouali           #+#    #+#             */
/*   Updated: 2021/12/19 08:45:22 by ybouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	help_2(t_list **stack_a, t_list **stack_b)
{
	char		*s;

	s = get_next_line(0);
	while (s)
	{
		opera(stack_a, stack_b, s);
		free(s);
		s = get_next_line(0);
	}
	if (ft_check_sort(stack_a, ft_lst_size(*stack_a)) == 1)
		ft_putendl_fd("OK", 1);
	else
		ft_putendl_fd("KO", 1);
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
		help_2(stack_a, stack_b);	
		free_stack(stack_a);
		free_stack(stack_b);
	}
	return (0);
}
