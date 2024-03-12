/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mini_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:20:06 by paulmart          #+#    #+#             */
/*   Updated: 2024/03/12 14:30:15 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_highest_node(t_stack *a)
{
	t_stack	*highest_node;
	int		highest_value;

	if (a == NULL)
		return (NULL);
	highest_value = INT_MIN;
	while (a)
	{
		if (a->value > highest_value)
		{
			highest_value = a->value;
			highest_node = a;
		}
		a = a->next;
	}
	return (highest_node);
}

void	mini_sort(t_stack **a)
{
	t_stack	*highest_node;

	highest_node = find_highest_node(*a);
	if (*a == highest_node)
		ra(a);
	else if ((*a)->next == highest_node)
		rra(a);
	if ((*a)->value > (*a)->next->value)
		sa(a);
}
