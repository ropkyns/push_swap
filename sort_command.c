/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:51:30 by paulmart          #+#    #+#             */
/*   Updated: 2024/03/13 17:10:44 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	end_rotation(t_stack **stack, t_stack *smallest_node, char name)
{
	while (*stack != smallest_node)
	{
		if (name == 'a')
		{
			if (smallest_node->pos >= stack_len(*stack) / 2)
				ra(stack);
			else
				rra(stack);
		}
		if (name == 'b')
		{
			if (smallest_node->pos >= stack_len(*stack) / 2)
				rb(stack);
			else
				rrb(stack);
		}
	}
}

static void	move(t_stack **a, t_stack **b)
{
	
}

void	push_swap(t_stack **a, t_stack **b)
{
	t_stack	*smallest;
	int		len_stack;

	len_stack = stack_len(*a);
	if (len_stack == 5)
		five_stack(a, b);
	else
	{
		while (len_stack > 3)
		{
			pb(a, b);
			len_stack--;
		}
	}
	mini_sort(a);
	while (*b)
	{
		init_nodes(*a, *b);
	}
}
