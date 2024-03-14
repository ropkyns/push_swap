/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_command.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 12:51:30 by paulmart          #+#    #+#             */
/*   Updated: 2024/03/14 14:59:49 by paulmart         ###   ########.fr       */
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

static void	rotation(t_stack **a, t_stack **b, t_stack *lowest, int reverse)
{
	while (*a != lowest->target_node
		&& *b != lowest)
	{
		if (reverse == 1)
			rr(a, b);
		else
			rrr(a, b);
		set_pos(*a);
		set_pos(*b);
	}
}

static void	sort(t_stack **a, t_stack **b)
{
	t_stack	*lowest;
	int		reverse;

	reverse = 0;
	lowest = find_lowest_cost(*b);
	if (lowest->pos <= stack_len(*b) / 2
		&& lowest->target_node->pos <= stack_len(*a))
	{	
		reverse = 1;
		rotation(a, b, lowest, reverse);
	}	
	else if (lowest->pos > stack_len(*b) / 2
		&& lowest->target_node->pos > stack_len (*a))
	{
		reverse = 0;
		rotation(a, b, lowest, reverse);
	}
	end_rotation(b, lowest, 'b');
	end_rotation(a, lowest->target_node, 'a');
	pa(a, b);
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
		while (len_stack-- > 3)
			pb(a, b);
	}
	mini_sort(a);
	while (*b)
	{
		init_nodes(*a, *b);
		sort(a, b);
	}
	set_pos(*a);
	smallest = find_smallest_node(*a);
	if (smallest->pos <= stack_len(*a) / 2)
		while (*a != smallest)
			ra(a);
	else
		while (*a)
			rra(a);
}
