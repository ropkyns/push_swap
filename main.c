/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palu <palu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 15:26:23 by paulmart          #+#    #+#             */
/*   Updated: 2024/03/06 21:01:22 by palu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	t_stack *a;
	int arg_2;

	a = NULL;
	arg_2 = 0;
	argv = ft_split(argv[1], ' ');
	stack_init(&a, argv + 1, arg_2);
	while (a != NULL)
	{
		printf("%ld\n", a->value);
		a = a->next;
	}
	return(0);
}
