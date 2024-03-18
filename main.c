/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:26:23 by paulmart          #+#    #+#             */
/*   Updated: 2024/03/18 17:09:30 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		arg_2;

	a = NULL;
	b = NULL;
	arg_2 = 1;
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		arg_2 = 0;
	}
	stack_init(&a, argv + 1, arg_2);
	if (!sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a);
		else if (stack_len(a) == 3)
			mini_sort(&a);
		else
			push_swap(&a, &b);
	}
	free_stack(a);
	if (arg_2 == 0)
		free_argv(argv);
	return (0);
}

/* 	tmp = a;
	while (tmp != NULL)
	{
		printf("%ld\n", tmp->value);
		tmp = tmp->next;
	} */