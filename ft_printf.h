#ifndef PRINTF_H
# define PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int ft_handleconv(char conv, va_list ap);
int ft_printf(const char *format, ...);
int	ft_print_hex(unsigned int hex, char conv);
int ft_print_vptr(void *ptr);
int	ft_print_unbr(unsigned int nbr);
int	ft_print_nbr(int nbr);
int ft_print_str(char *s);
int ft_print_char(int c);

#endif