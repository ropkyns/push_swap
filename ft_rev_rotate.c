/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:40:40 by paulmart          #+#    #+#             */
/*   Updated: 2024/03/12 12:41:39 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rev_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last_node;
	t_stack	*before_last;

	if (stack == NULL || *stack == NULL)
		return ;
	last_node = find_last_node(*stack);
	before_last = find_before_last_node(*stack);
	tmp = *stack;
	*stack = last_node;
	(*stack)->next = tmp;
	before_last->next = NULL;
}

void	rra(t_stack **a)
{
	rev_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	rev_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rev_rotate(a);
	rev_rotate(b);
	write(1, "rrr\n", 4);
}
