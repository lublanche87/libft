/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshin <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/25 20:03:38 by sshin             #+#    #+#             */
/*   Updated: 2016/12/27 07:55:37 by sshin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_letters(char const *s, char c, unsigned int i)
{
	unsigned	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		++len;
		++i;
	}
	return (len);
}

static int	count_words(char const *s, char c)
{
	int			i;

	i = 0;
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			i++;
			while (*s && *s != c)
				s++;
		}
	}
	return (i);
}

char		**ft_strsplit(char const *s, char c)
{
	char		**new;
	int			i;
	int			j;

	i = 0;
	j = 0;
	if (!(new = (char**)malloc(sizeof(char*) * count_words(s, c) + 1)))
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			if (!(new[j++] = (ft_strsub(s, i, count_letters(s, c, i)))))
				return (NULL);
			i += count_letters(s, c, i);
		}
		else
			i++;
	}
	new[j] = NULL;
	return (new);
}
