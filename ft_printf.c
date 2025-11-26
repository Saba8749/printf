/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segribas <segribas@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:30:20 by saba              #+#    #+#             */
/*   Updated: 2025/11/26 18:13:34 by segribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
	int counter;
	counter = 0;

	int i;
	i = 0;

	va_list args;
	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			break;
			counter += ft_handleconv(format[i], args);
		}
		else
			counter += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (counter);
}
