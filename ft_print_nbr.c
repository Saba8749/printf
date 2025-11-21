/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segribas <segribas@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:21:52 by segribas          #+#    #+#             */
/*   Updated: 2025/11/21 19:00:55 by segribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

int	ft_print_unbr(unsigned int nbr)
{
	int count;
	int i;
	char temp[10];

	i = 0;
	count = 0;
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (nbr > 0)
	{
		temp[i] = (char)((nbr % 10) + '0');
		i++;
		count++;
		nbr /= 10;
	}
	while (i > 0 )
	{
		i--;
		write(1, &temp[i], 1);
	}
	return(count);
}
int	ft_print_nbr(int nbr)
{
	int flag;
	
	flag = 0;
	if (nbr == -2147483648)
	{
		write(1, "-2147483648", 11);
		return(11);
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
		flag = 1;
	}
	return(ft_print_unbr((unsigned int)nbr) + flag);
}
