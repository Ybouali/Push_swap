/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouali <ybouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:13:04 by ybouali           #+#    #+#             */
/*   Updated: 2021/12/19 08:52:37 by ybouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_check_num(char *str)
{
	int		i;

	if (str[0] == '-')
		i = 0;
	else
		i = -1;
	while (str[++i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
	}
	return (1);
}

void	ft_check_dup_num(char **av)
{
	int		i;
	int		j;
	char	*dup;

	i = 0;
	while (av[++i])
	{
		dup = ft_strdup(av[i]);
		j = -1;
		while (av[++j])
		{
			if (j == i)
				j++;
			else if (!ft_check_num(dup) || (ft_atoi(av[j]) >= INT_MAX) \
					|| (ft_atoi(av[j]) <= INT_MIN) \
					|| (ft_strcmp(dup, av[j]) == 0))
			{
				free(dup);
				dup = NULL;
				ft_error("Error");
			}
		}
		free(dup);
		dup = NULL;
	}
}

int	ft_check_sort(t_list **head, int len)
{
	t_list	*tmp;
	
	if (ft_lst_size(*head) != len)
		return (0);
	(void)len;
	tmp = *head;
	while (tmp && tmp->next)
	{
		if ((tmp)->next && ((tmp)->value < (tmp)->next->value))
			(tmp) = tmp->next;
		else
			return (0);
	}
	return (1);
}
