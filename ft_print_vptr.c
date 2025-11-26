/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_vptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segribas <segribas@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 19:50:27 by segribas          #+#    #+#             */
/*   Updated: 2025/11/26 17:15:26 by segribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_puthex_ulong(unsigned long n)
{
	int 	count;
	char	c;

	count = 0;
	if (n >= 16)
		count += ft_puthex_ulong(n / 16);
	c = "0123456789abcdef"[n % 16];
	write(1, &c, 1);
	return(count + 1);
}


int ft_print_vptr(void *ptr)
{
	unsigned long 	n;

	n = (unsigned long) ptr;
	if (n == 0)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	return(2 + ft_puthex_ulong(n));
}
