/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ bzero.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:46:18 by marvin            #+#    #+#             */
/*   Updated: 2023/11/08 18:46:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n);

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*s;

	s = (unsigned char *)str;
	while (n > 0)
	{
		*s = '\0';
		s++;
		n--;
	}
}

/* int main(void)
{
    char *str = "42 cursus go";
    bzero(str, 4);
    printf("%s", str);
} */