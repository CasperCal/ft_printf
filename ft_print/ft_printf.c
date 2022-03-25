/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:29:13 by ccaluwe           #+#    #+#             */
/*   Updated: 2022/03/11 14:03:59 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_eval_format(va_list args, const char format)
{
	int	ret;

	ret = 0;
	if (format == 'c')
		ret += ft_printchar(va_arg(args, int));
	if (format == 's')
		ret += ft_printstr(va_arg(args, char *));
	if (format == 'p')
		ret += ft_void_hex(va_arg(args, unsigned long));
	if (format == 'd')
		ret += ft_printdec(va_arg(args, int));
	if (format == 'i')
		ret += ft_printintdec(va_arg(args, int));
	if (format == 'u')
		ret += ft_unsigndec(va_arg(args, unsigned int));
	if (format == 'x')
		ret += ft_hexa_low(va_arg(args, unsigned int));
	if (format == 'X')
		ret += ft_hexa_up(va_arg(args, unsigned int));
	if (format == '%')
		ret += ft_perc();
	return (ret);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		ret;

	va_start(args, format);
	i = 0;
	ret = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			ret += ft_eval_format(args, format[i + 1]);
			i ++;
		}
		else
		{
			ret += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(args);
	return (ret);
}
