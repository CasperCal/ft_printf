
#include "ft_printf.h"

/*
 we initialise the structure containing flags, setting them all to 0 we all also use it to store the total length of everything written, becuase we need to return this
 

t_flags *ft_init_flags(t_flags *tab)
{
    tab->wdt=0;
    tab->prc=0;
    tab->zero=0;
    tab->pnt=0;
    tab->dash=0;
    tab->totlen=0;
    tab->sign=0;
    tab->is_zero=0;
    tab->perc=0;
    tab->spc=0;
    return (tab);
}
/* we check the character after the % to determine what we need to print
 */

int ft_eval_format(va_list ap, const char *format, int i )
{
    if (i == 'c')
        ret = ft_putchar(va_arg(args, int));
    if (i == 's')
        ret = ft_putstr(va_arg(args, char *));
    if (i == 'p')
        ret = ft_void_hex(va_arg(args, unsigned long));
    if (i == 'd')
        ret = ft_putdec(va_arg(args, int));
    if (i == 'i')
        ret = ft_putintdec(va_arg(args, int));
    if (i == 'u')
        ret = ft_unsigndec(va_arg(args, unsigned int));
    if (i == 'x')
        ret = ft_hexa_low(va_arg(args, unsigned int));
    if (i == 'X')
        ret = ft_hexa_up(va_arg(args, unsigned int));
    if (i == '%')
        ret = ft_perc();
    
    return (ret);
}

int ft_printf(const char *format, ...)
{
    va_list(ap);
    int     i;
    int     ret;
    t_flags *tab;
    //tab = (t_flags *)malloc(sizeof(t_flags));
    //if (!tab)
    //    retur(NULL);
    //ft_init_flags(tab);
    va_start(ap, format);
    i = 0;
    ret = 0;
    while (format[i++])
    {
        if (format[i] == '%')
            ret += ft_eval_format(ap, format, i + 1);
        else
            ret += write(1, &format[i], 1);
    }
    va_end(ap);
    //ret += tab->tl;
    free(tab);
    return (ret);
}
