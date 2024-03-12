/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:26:23 by paulmart          #+#    #+#             */
/*   Updated: 2024/03/12 14:35:21 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		arg_2;
	t_stack	*tmp;

	a = NULL;
	b = NULL;
	arg_2 = 1;
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		arg_2 = 0;
	}
	stack_init(&a, argv + 1, arg_2);
	tmp = a;
	while (tmp != NULL)
	{
		printf("%ld\n", tmp->value);
		tmp = tmp->next;
	}
	mini_sort(&a);
	tmp = a;
	while (tmp != NULL)
	{
		printf("%ld\n", tmp->value);
		tmp = tmp->next;
	}
	free_stack(a);
	free_stack(b);
	if (argc == 2)
		free_argv(argv + 1);
	return (0);
}
