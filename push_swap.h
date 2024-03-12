/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 10:09:29 by paulmart          #+#    #+#             */
/*   Updated: 2024/03/12 14:35:15 by paulmart         ###   ########.fr       */
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
	struct s_stack				*next;
	struct s_stack				*target_node;
}	t_stack;

char	**ft_split(char *str, char separator);
void	stack_init(t_stack **a, char **argv, int arg_2);
void	add_node(t_stack **stack, int nbr);
t_stack	*find_last_node(t_stack *stack);
t_stack	*find_before_last_node(t_stack *stack);
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
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);
void	mini_sort(t_stack **a);

#endif