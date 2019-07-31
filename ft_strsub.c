/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/25 19:44:41 by sshin             #+#    #+#             */
/*   Updated: 2019/02/12 20:11:10 by sshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	if (!(str = ft_strnew(len)))
		return (NULL);
	while (start--)
		s++;
	i = 0;
	while (len--)
		str[i++] = *s++;
	str[i] = '\0';
	return (str);
}
