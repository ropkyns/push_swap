/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:26:23 by paulmart          #+#    #+#             */
/*   Updated: 2024/03/11 18:14:15 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	*a;
	int		arg_2;
	t_stack	*tmp;

	a = NULL;
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
	sa(&a);
	tmp = a;
	while (tmp != NULL)
	{
		printf("%ld\n", tmp->value);
		tmp = tmp->next;
	}
	free_stack(a);
	if (argc == 2)
		free_argv(argv);
	return (0);
}
