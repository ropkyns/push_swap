/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:23:33 by ropkyns           #+#    #+#             */
/*   Updated: 2023/12/07 17:25:21 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t number, size_t size);

void	*ft_calloc(size_t number, size_t size)
{
	void	*ptr;

	ptr = malloc(size * number);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, number * size);
	return (ptr);
}
