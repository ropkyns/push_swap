/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 15:03:58 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/07 17:25:47 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t lendst);

size_t	ft_strlcpy(char *dst, const char *src, size_t lendst)
{
	size_t	i;

	i = 0;
	if (lendst != 0)
	{
		while ((i < (lendst - 1)) && src[i] != '\0')
		{
			dst[i] = (char)src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen((char *)src));
}

/* int		main(void)
{
	char	dest[50];
	char	*src;
	int		size;

	src = "ceci est un test";
	size = 10;
	printf("%zu\n", ft_strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
	//printf("%lu\n", strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
} */
