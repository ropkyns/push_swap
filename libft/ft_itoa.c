/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:14:31 by ropkyns           #+#    #+#             */
/*   Updated: 2023/12/06 18:28:35 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n);

static int	intlen(int n)
{
	int		len;
	long	num;

	len = 0;
	num = n;
	if (n == 0)
		len++;
	if (n < 0)
	{
		len++;
		num *= -1;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*c;
	int		neg;
	long	num;

	len = intlen(n);
	neg = 0;
	num = n;
	c = malloc(sizeof(char) * (len + 1));
	if (!c)
		return (NULL);
	c[len] = '\0';
	if (n < 0)
	{
		c[0] = '-';
		num *= -1;
		neg = 1;
	}
	while (len > neg)
	{
		c[len - 1] = ((num % 10) + 48);
		num /= 10;
		len--;
	}
	return (c);
}

/* int main(void)
{
    int n = -340;
    printf("%s\n", ft_itoa(n));
    return(0);
} */