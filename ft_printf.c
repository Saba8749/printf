/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saba <saba@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:30:20 by saba              #+#    #+#             */
/*   Updated: 2025/11/16 16:48:53 by saba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include <unistd.h>

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
			// hier muss ich meine handleconversions und den counter aufrufen.
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			counter++;
			i++;
		}
	}
	va_end(args);
	return (counter);
}
