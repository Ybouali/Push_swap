/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouali <ybouali@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:54:42 by ybouali           #+#    #+#             */
/*   Updated: 2021/12/19 05:12:45 by ybouali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* INCLUDE LIBERY */

# include <stdlib.h>
# include <limits.h>
# include <stdio.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

typedef struct s_list
{
	int					value;
	int					index;
	struct s_list		*next;
}	t_list;

void		init(t_list **stack, int ac, char **av);

void		radix_sort(t_list **stack_a, t_list **stack_b);

void		algo_short(t_list **a, t_list **b);

int			get_min(t_list *head);
int			get_max_bits(t_list **stack);
void		index_stack(t_list **stack);
t_list		*get_next_min(t_list **stack);
int			ft_check_sort(t_list **head, int len);
void		ft_check_dup_num(char **av);

int			swap(t_list **stack);
int			swap_stack(t_list **stack, char c, int ch);
int			swap_two_stack(t_list **stack_a, t_list **stack_b, int ch);
void		push(t_list **a, t_list **b);
void		push_stack(t_list **stack_a, t_list **stack_b, char c, int ch);
int			rotate(t_list **stack);
int			rotate_stack(t_list **stack, char c, int ch);
int			rotate_two_stack(t_list **stack_a, t_list **stack_b, int ch);
int			reverse_rotate(t_list **stack);
int			rr_stack(t_list **stack, char c, int ch);
int			reverse_rotate_two_stack(t_list **a, t_list **b, int ch);
void		ft_print_stack(t_list *head);

int			ft_lst_size(t_list *head);
void		ft_lstadd_back(t_list **head, t_list *new);
t_list		*ft_lstlast(t_list *head);
void		ft_lstadd_front(t_list **head, t_list *new);
t_list		*ft_lstnew(int value);

void		free_stack(t_list **stack);
void		ft_free(char **str);
void		ft_error(char *str);

void		opera(t_list **stack_a, t_list **stack_b, char *s);

#endif
