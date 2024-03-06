/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palu <palu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:20:52 by palu              #+#    #+#             */
/*   Updated: 2024/03/06 20:56:20 by palu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atol(char *argv)
{
	int	i;
	long	signe;
	long	nb;

	i = 0;
	signe = 1;
	nb = 0;
	while ((argv[i] >= 9 && argv[i] <= 13) || argv[i] == 32)
		i++;
	if (argv[i] == '-')
	{
		signe = -1;
		i++;
	}
	else if (argv[i] == '+')
		i++;
	while (argv[i] >= '0' && argv[i] <= '9')
	{
		nb = nb * 10 + argv[i] - '0';
		i++;
	}
	return (nb * signe);
}

t_stack	*find_last_node(t_stack *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack)
	{
		if(stack->next == NULL)
			return (stack);
		stack = stack->next;
	}
}

void	add_node(t_stack **stack, int nbr)
{
	t_stack		*node;
	t_stack		*last_node;

	if (stack == NULL)
		return ;
	node = malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->next = NULL;
	node->value = nbr;
	if (*stack == NULL)
	{
		*stack = node;
	}
	else
	{
		last_node = find_last_node(*stack);
		last_node->next = node;
	}
}

void	stack_init(t_stack **a, char **argv, int arg_2)
{
	long	nbr;
	int		i;

	i = 0;
	while (argv[i])
	{
		if (syntaxe_error(argv[i]))
			error_free(a, argv, arg_2);
		nbr = ft_atol(argv[i]);
		if (nbr < INT_MIN && nbr > INT_MAX)
			error_free(a, argv, arg_2);
		if (rep_error(*a, (int)nbr) == 1)
			error_free(a, argv,arg_2);
		add_node(a, (int)nbr);
		i++;
	}
}