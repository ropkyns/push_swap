/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 13:37:56 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/06 18:30:02 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (d > s)
	{
		while (++i <= n)
			d[n - i] = s[n - i];
	}
	else
	{
		while (n-- > 0)
			*(d++) = *(s++);
	}
	return (dest);
}
/* int main(void)
{
    char src[50];
    char dst[50];
	strcpy(src, "This is string.h library function");
	puts(src);
	ft_memmove(dst, src, 5);
	puts(dst);
	return (0);
} */