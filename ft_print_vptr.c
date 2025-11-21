/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_vptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segribas <segribas@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 19:50:27 by segribas          #+#    #+#             */
/*   Updated: 2025/11/21 21:29:32 by segribas         ###   ########.fr       */
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
	int				count;
	unsigned long 	n;

	count = 0;
	n = (unsigned long) ptr;
	if (n == 0)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	count += 2;
	count += ft_puthex_ulong(n);
	return(count);
}
