/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 03:45:06 by sshin             #+#    #+#             */
/*   Updated: 2016/12/27 07:50:58 by sshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_hex(unsigned int n)
{
	if (n >= 16)
		ft_print_hex(n / 16);
	n = n % 16;
	if (n < 10)
		n = n + '0';
	else
		n = n + 'a' - 10;
	write(1, &n, 1);
}
