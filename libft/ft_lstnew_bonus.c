/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 18:51:03 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/08 11:42:50 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content);

t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = (void *)malloc(sizeof(t_list));
	if (!lst)
		return (NULL);
	lst -> content = content;
	lst -> next = NULL;
	return (lst);
}
