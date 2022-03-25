/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaluwe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 16:29:37 by ccaluwe           #+#    #+#             */
/*   Updated: 2022/03/09 16:29:44 by ccaluwe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
int		ft_eval_format(va_list ap, const char format);
int		ft_printchar(char c);
int		ft_printstr(char *str);
int		ft_void_hex(unsigned long long ptr);
int		ft_printdec(int n);
int		ft_printintdec(int n);
int		ft_unsigndec(unsigned int n);
int		ft_hexa_low(unsigned int hex);
int		ft_hexa_up(unsigned int hex);
int		ft_perc(void);
int		ft_printstr(char *str);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *str);
char	*ft_itoa(int n);
size_t	ft_isize(int n);
void	ft_putstr_fd(char *s, int fd);
char	*ft_uitoa(unsigned int n);
size_t	ft_uisize(unsigned int n);
int		ft_hexa_len(unsigned int n);

#endif
