/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_conversions.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saba <saba@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 16:37:15 by saba              #+#    #+#             */
/*   Updated: 2025/11/16 16:46:16 by saba             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdarg.h>
#include <unistd.h>

int handle_conversion(char type, va_list args)
{
	int count;
	count = 0;
	
	if(type == 'c')
	{
		int temp;
		char c;
		temp = va_arg(args, int);
		c = (char)temp;
		write(1, &c, 1);
		count++;
	}
}