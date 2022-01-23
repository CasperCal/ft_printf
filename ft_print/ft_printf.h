



/*
 structure to contain all possible flags for ft_printf and the length as we need to return it.
 */
typdef struct  p_flags
{
    va_list args;
    int wdt;
    int prc;
    int zero;
    int pnt;
    int dash;
    int totlen;
    int sign;
    int is_zero;
    int perc;
    int spc;

} t_flags;

