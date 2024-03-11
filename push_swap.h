/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:09:29 by paulmart          #+#    #+#             */
/*   Updated: 2024/03/11 16:55:11 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stddef.h>

typedef struct s_stack
{
	long						value;
	int							index;
	struct s_stack				*next;
}	t_stack;

char	**ft_split(char *str, char separator);
void	stack_init(t_stack **a, char **argv, int arg_2);
void	add_node(t_stack **stack, int nbr);
t_stack	*find_last_node(t_stack *stack);
long	ft_atol(char *argv);
int		syntaxe_error(char *nbr);
int		rep_error(t_stack *a, int nbr);
void	error_free(t_stack **a, char **argv, int arg_2);
void	free_stack(t_stack *a);
void	free_argv(char **argv);
void	sa(t_stack **a);
void	sb(t_stack **b);
void	ra(t_stack **a);
void	rb(t_stack **b);

#endif