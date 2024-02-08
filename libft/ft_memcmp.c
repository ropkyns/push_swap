/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:23:54 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/06 18:22:02 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t n);

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t n)
{
	size_t				i;
	const unsigned char	*ptr1;
	const unsigned char	*ptr2;

	i = 0;
	ptr1 = (const unsigned char *)pointer1;
	ptr2 = (const unsigned char *)pointer2;
	while (n > i)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

/* int main(void)
{
    char * chou = "clem";
    char * quette = "ence";

    printf("%d", ft_memcmp(chou, quette, 4));
    return(0);
} */