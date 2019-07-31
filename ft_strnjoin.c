/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/27 03:51:06 by sshin             #+#    #+#             */
/*   Updated: 2016/12/27 07:55:50 by sshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(const char *s1, const char *s2, size_t len)
{
	char		*s;
	unsigned	i;

	s = ft_strnew(ft_strlen(s1) + len + 1);
	i = 0;
	while (*s1)
		s[i++] = *s1++;
	while (*s2 && len--)
		s[i++] = *s2++;
	return (s);
}
