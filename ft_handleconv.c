/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleconv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segribas <segribas@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:37:15 by saba              #+#    #+#             */
/*   Updated: 2025/11/26 18:12:09 by segribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_handleconv(char conv, va_list ap)
{
	int count;

	count = 0;
	if (conv == 'd' || conv == 'i')
		count += ft_print_nbr(va_arg(ap, int));
	else if (conv == 'u')
		count += ft_print_unbr(va_arg(ap, unsigned int));
	else if (conv == 'x' || conv == 'X')
		count += ft_print_hex(va_arg(ap, unsigned int), conv);
	else if (conv == 'c')
		count += ft_print_char(va_arg(ap, int));
	else if (conv == 's')
		count += ft_print_str(va_arg(ap, char *));
	else if (conv == 'p')
		count += ft_print_vptr(va_arg(ap, void *));
	else if (conv == '%')
		count += write(1, "%", 1);
	else
	{
		count += write(1, "%", 1);
		count += write(1, &conv, 1);
	}
	return (count);
}