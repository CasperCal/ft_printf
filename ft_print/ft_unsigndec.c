/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigndec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 11:54:11 by ccaluwe           #+#    #+#             */
/*   Updated: 2022/03/10 11:54:13 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_uisize(unsigned int n)
{
	size_t	size;

	size = 0;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_uitoa(unsigned int n)
{
	char			*str;
	unsigned long	nbr;
	size_t			size;

	nbr = n;
	size = ft_uisize(n);
	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	*(str + size--) = '\0';
	while (nbr > 0)
	{
		*(str + size--) = nbr % 10 + '0';
		nbr /= 10;
	}
	return (str);
}

int	ft_unsigndec(unsigned int n)
{
	char	*str;
	int		c;

	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	str = ft_uitoa(n);
	if (!str)
		return (0);
	c = ft_strlen(str);
	ft_putstr_fd(str, 1);
	free (str);
	return (c);
}
