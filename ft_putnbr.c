/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdudley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 20:54:40 by bdudley           #+#    #+#             */
/*   Updated: 2019/02/22 17:30:28 by bdudley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_nbr(int n)
{
	if (n / 10 == 0)
		ft_putchar(n + '0');
	else
	{
		ft_nbr(n / 10);
		ft_nbr(n % 10);
	}
}

void		ft_putnbr(int n)
{
	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 0)
		ft_nbr(n);
}
