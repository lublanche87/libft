/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/25 22:31:22 by sshin             #+#    #+#             */
/*   Updated: 2016/12/27 01:04:11 by sshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	size_t			len;
	char			*mem;

	i = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\r' ||
			s[i] == '\v' || s[i] == '\f')
		++i;
	len = ft_strlen(s) - 1;
	while (len > i && (s[len] == ' ' || s[len] == '\t' || s[len] == '\n' ||
				s[len] == '\r' || s[len] == '\v' || s[len] == '\f'))
		len--;
	if (len < i)
		return (mem = ft_strdup(""));
	return (mem = ft_strsub(s, i, len - (size_t)i + 1));
}
