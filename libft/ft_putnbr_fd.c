/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulmart <paulmart@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 12:45:13 by ropkyns           #+#    #+#             */
/*   Updated: 2023/12/07 17:25:44 by paulmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd);

void	ft_putnbr_fd(int n, int fd)
{
	long long int	temp;

	temp = n;
	if (temp < 0)
	{
		temp *= -1;
		ft_putchar_fd('-', fd);
	}
	if (temp > 9)
	{
		ft_putnbr_fd((temp / 10), fd);
		ft_putchar_fd((temp % 10 + '0'), fd);
	}
	else
		ft_putchar_fd((temp + '0'), fd);
}
