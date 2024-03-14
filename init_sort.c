/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 11:57:59 by paulmart          #+#    #+#             */
/*   Updated: 2024/03/14 11:01:45 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_pos(t_stack *stack)
{
	int		pos;

	pos = 0;
	if (stack == NULL)
		return ;
	while (stack)
	{
		stack->pos = pos;
		stack = stack->next;
		pos++;
	}
}

void	set_target(t_stack *a, t_stack *b)
{
	t_stack	*tmp_a;
	t_stack	*targ_node;
	long	best_target;

	while (b)
	{
		best_target = LONG_MAX;
		tmp_a = a;
		while (tmp_a)
		{
			if (tmp_a->value > b->value
				&& tmp_a->value < best_target)
			{
				best_target = tmp_a->value;
				targ_node = tmp_a;
			}
			tmp_a = tmp_a ->next;
		}
		if (best_target == LONG_MAX)
			b->target_node = find_smallest_node(a);
		else
			b->target_node = targ_node;
		b = b->next;
	}
}

void	set_cost(t_stack *a, t_stack *b)
{
	int		len_stack_a;
	int		len_stack_b;

	len_stack_a = stack_len(a);
	len_stack_b = stack_len(b);
	while (b)
	{
		b->cost = b->pos;
		if (b->pos > len_stack_b / 2)
			b->cost = len_stack_b - b->pos;
		if (b->target_node->pos <= len_stack_a / 2)
			b->cost += b->target_node->pos;
		else
			b->cost += len_stack_a - b->target_node->pos;
		b = b->next;
	}
}

void	init_nodes(t_stack *a, t_stack *b)
{
	set_pos(a);
	set_pos(b);
	set_target(a, b);
	set_cost(a, b);
}
