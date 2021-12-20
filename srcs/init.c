/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouali <ybouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:18:01 by ybouali           #+#    #+#             */
/*   Updated: 2021/12/19 03:26:33 by ybouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init(t_list **stack, int ac, char **av)
{
	t_list		*new;
	char		**args;
	int			i;

	i = 0;
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
	{
		i = 1;
		args = av;
	}
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		if (!new)
			ft_error("Error");
		ft_lstadd_back(stack, new);
		i++;
	}
	index_stack(stack);
	if (ac == 2)
		ft_free(args);
}
