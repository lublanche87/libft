/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/03 14:21:12 by sshin             #+#    #+#             */
/*   Updated: 2016/12/27 08:14:58 by sshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *l, size_t len)
{
	size_t i;
	size_t n;

	n = (size_t)ft_strlen((char *)l);
	i = 0;
	while (big[i] && (i + n <= len))
	{
		if (ft_strncmp(big + i, l, n) == 0)
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
