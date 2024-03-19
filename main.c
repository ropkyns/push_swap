/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:26:23 by paulmart          #+#    #+#             */
/*   Updated: 2024/03/19 11:47:23 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && syntaxe_error(argv[1])))
		return (write(2, "Error\n", 6));
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	stack_init(&a, argv + 1, argc);
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
	if (argc == 2)
		free_argv(argv + 1);
	return (0);
}

/* 	tmp = a;
	while (tmp != NULL)
	{
		printf("%ld\n", tmp->value);
		tmp = tmp->next;
	} */