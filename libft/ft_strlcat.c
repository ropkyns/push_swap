/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:14:48 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/07 17:25:46 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n);

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	lendst;
	size_t	lensrc;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (((lendst >= (n - 1)) && ((lensrc + n) < (lendst + lensrc))) || (n == 0))
		return (lensrc + n);
	while ((lendst + i) < (n - 1) && src[i] != '\0')
	{
		dst[lendst + i] = (char)src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	return (lendst + lensrc);
}
/* int main(void)
{
	char			dest[50] = "sefsfesa";
	char			src[50] = "bvfvbf";
	unsigned int	size;

	size = 15;
//	printf("%lu\n", strlcat(dest, src, size));
	printf("%zu\n", ft_strlcat(dest, src, size));
	printf("dest: %s\nsrc: %s\n", dest, src);
} */