/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segribas <segribas@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:05:20 by segribas          #+#    #+#             */
/*   Updated: 2025/11/20 19:12:27 by segribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int hex, char conv)
{
	char	temp[16];
	int		count;
	int		i;
	int		digit;

	i = 0;
	count = 0;
	if (hex == 0)
		return (write(1, "0", 1));
	while (hex > 0)
	{
		digit = hex % 16;
		if (digit < 10)
			temp[i++] = '0' + digit;
		else if (conv == 'x')
			temp[i++] = 'a' + (digit - 10);
		else
			temp[i++] = 'A' + (digit - 10);
		count++;
		hex = hex / 16;
	}
	while (i > 0)
		write(1, &temp[--i], 1);
	return (count);
}
