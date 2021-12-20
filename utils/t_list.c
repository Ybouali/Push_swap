/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_list.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouali <ybouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:59:41 by ybouali           #+#    #+#             */
/*   Updated: 2021/12/19 06:52:17 by ybouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_lstnew(int value)
{
	t_list	*new;

	new = NULL;
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = -1;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_list **head, t_list *new)
{
	new->next = *head;
	*head = new;
}

t_list	*ft_lstlast(t_list *head)
{
	t_list	*tmp;

	tmp = NULL;
	tmp = head;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (tmp);
	}
	return (tmp);
}

void	ft_lstadd_back(t_list **head, t_list *new)
{
	t_list	*tmp;

	tmp = NULL;
	if (*head)
	{
		tmp = ft_lstlast(*head);
		tmp->next = new;
		new->next = NULL;
	}
	else
	{
		*head = new;
		(*head)->next = NULL;
	}
}

int	ft_lst_size(t_list *head)
{
	size_t		i;
	t_list		*tmp;

	tmp = NULL;
	tmp = head;
	i = 0;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
