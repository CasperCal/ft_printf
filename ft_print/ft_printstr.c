/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 10:58:23 by ccaluwe           #+#    #+#             */
/*   Updated: 2022/03/10 10:58:39 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	if (!str)
		return (write(1, "(null)", 6));
	write(1, str, ft_strlen(str));
	return ((int)ft_strlen(str));
}
