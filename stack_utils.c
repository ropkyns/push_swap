/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:50:47 by paulmart          #+#    #+#             */
/*   Updated: 2024/03/13 12:50:55 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_before_last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next && stack->next->next)
		stack = stack->next;
	return (stack);
}

int	stack_len(t_stack *stack)
{
	int		len;

	if (stack == NULL)
		return (0);
	len = 0;
	while (stack)
	{
		len++;
		stack = stack->next;
	}
	return (len);
}

t_stack	*find_smallest_node(t_stack *a)
{
	t_stack	*smallest_node;
	int		smallest_value;

	if (a == NULL)
		return (NULL);
	smallest_value = INT_MAX;
	while (a)
	{
		if (a->value < smallest_value)
		{
			smallest_value = a->value;
			smallest_node = a;
		}
		a = a->next;
	}
	return (smallest_node);
}

void	five_stack(t_stack **a, t_stack **b)
{
	while (stack_len(*a) > 3)
	{
		init_nodes(*a, *b);
		end_rotation(a, find_smallest_node(*a), 'a');
		pb(a, b);
	}
}
