/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:16:58 by paulmart          #+#    #+#             */
/*   Updated: 2023/12/06 18:24:58 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n);

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = s;
	while (n)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return (s);
}

/* int main(void)
{
	char str[50];
	strcpy(str, "This is string.h library function");
	puts(str);
	ft_memset(str, '$', 5);
	puts(str);
	return (0);
} */