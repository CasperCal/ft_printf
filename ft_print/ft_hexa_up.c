/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_up.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:54:57 by ccaluwe           #+#    #+#             */
/*   Updated: 2022/03/10 11:55:00 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_up(unsigned int n)
{
	if (n >= 16)
	{
		ft_hexa_up(n / 16);
		ft_hexa_up(n % 16);
	}
	else
	{
		if (n <= 9)
		{
			ft_putchar_fd((n + '0'), 1);
		}
		else
		{
			ft_putchar_fd((n - 10 + 'A'), 1);
		}
	}
	return (ft_hexa_len(n));
}
