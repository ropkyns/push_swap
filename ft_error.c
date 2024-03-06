/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: palu <palu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:04:20 by palu              #+#    #+#             */
/*   Updated: 2024/03/06 22:37:48 by palu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_stack(t_stack **a)
{
	t_stack		*tmp;
	t_stack		*current;

	current = *a;
	while (current)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	*a = NULL;
}

void	free_argv(char **argv)
{
	int		i;

	i = -1;
	if (argv == NULL || *argv == NULL)
		return ;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv - 1);
}

void	error_free(t_stack **a, char **argv, int arg_2)
{
	int		i;

	i = -1;
	if (!(a == NULL))
		free_stack(a);
	if (arg_2 == 0)
		free_argv(argv);
	write(2, "Error\n", 6);
	exit(1);
}

int		rep_error(t_stack *a, int nbr)
{
	if (a == NULL)
		return (0);
	while (a)
	{
		if (a->value == nbr)
			return (1);
		a = a->next;
	}
	return (0);
}

int		syntaxe_error(char *nbr)
{
	int		i;

	i = 0;
	if (!(nbr[i] == '+' 
			|| nbr[i] == '-' 
			|| nbr[i] >= '0' && nbr[i] <= '9'))
		return (1);
	i++;
	if ((nbr[i] == '+' || nbr[i] == '-'
			|| !(nbr[i] >= '0' && nbr[i] <= '9'))
			&& !(nbr[i] == '\0'))
		return (1);
	i++;
	while (nbr[i])
	{
		if (!(nbr[i] >= '0' && nbr[i] <= '9'))
			return (1);
		i++;
	}
	return (0);
}