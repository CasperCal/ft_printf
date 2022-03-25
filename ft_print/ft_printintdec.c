/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printintdec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:53:28 by ccaluwe           #+#    #+#             */
/*   Updated: 2022/03/10 11:53:31 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printintdec(int n)
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
