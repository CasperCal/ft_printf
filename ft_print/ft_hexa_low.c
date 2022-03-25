/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_low.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:54:33 by ccaluwe           #+#    #+#             */
/*   Updated: 2022/03/10 11:54:35 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_len(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

int	ft_hexa_low(unsigned int n)
{
	if (n >= 16)
	{
		ft_hexa_low(n / 16);
		ft_hexa_low(n % 16);
	}
	else
	{
		if (n <= 9)
		{
			ft_putchar_fd((n + '0'), 1);
		}
		else
		{
			ft_putchar_fd((n - 10 + 'a'), 1);
		}
	}
	return (ft_hexa_len(n));
}
