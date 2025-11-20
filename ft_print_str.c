/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segribas <segribas@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:50:48 by segribas          #+#    #+#             */
/*   Updated: 2025/11/19 19:36:54 by segribas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_str(char *s)
{
	int i;
	
	i = 0;
	if(!s)
		return(write (1, "(null)", 6));
	while(s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
	return(i);
}
