/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 19:02:56 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/08 14:53:30 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*finalist;

	newlst = NULL;
	finalist = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		newlst = ft_lstnew(f(lst -> content));
		if (!newlst)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		lst = lst -> next;
		ft_lstadd_back(&finalist, newlst);
	}
	return (finalist);
}
