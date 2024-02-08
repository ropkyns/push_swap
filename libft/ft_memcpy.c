/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:46:12 by marvin            #+#    #+#             */
/*   Updated: 2023/11/08 18:46:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int					i;
	unsigned char		*destination;
	const unsigned char	*source;

	i = 0;
	destination = (unsigned char *)dest;
	source = (const unsigned char *)src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (n > 0)
	{
		destination[i] = source[i];
		i++;
		n--;
	}
	return (destination);
}

/* int main(void)
{
    char *source = "g,biogfjm"
    int n = 5;

    char *destination = ft_memcpy(destination, source, n);
} */