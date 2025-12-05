/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segribas <segribas@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 18:43:34 by segribas          #+#    #+#             */
/*   Updated: 2025/12/05 18:46:25 by segribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_handleconv(char conv, va_list ap);
int	ft_printf(const char *format, ...);
int	ft_print_hex(unsigned int hex, char conv);
int	ft_print_vptr(void *ptr);
int	ft_print_unbr(unsigned int nbr);
int	ft_print_nbr(int nbr);
int	ft_print_str(char *s);
int	ft_print_char(int c);

#endif