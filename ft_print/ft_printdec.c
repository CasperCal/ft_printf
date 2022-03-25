/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printdec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:59:30 by ccaluwe           #+#    #+#             */
/*   Updated: 2022/03/10 10:59:33 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printdec(int n)
{
	char	*str;
	int		c;

	str = ft_itoa(n);
	if (!str)
		return (0);
	c = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free (str);
	return (c);
}
