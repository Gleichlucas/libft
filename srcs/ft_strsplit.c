/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkunz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 18:20:15 by lkunz             #+#    #+#             */
/*   Updated: 2018/07/08 10:27:17 by lkunz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_wordcounter(char const *s, char c)
{
	char	flag;
	int		wordc;

	flag = 0;
	wordc = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!flag)
				wordc++;
			flag = 1;
		}
		if (*(s + 1) == '\0' || *(s + 1) == c)
			flag = 0;
		s++;
	}
	return (wordc);
}

static	char	*ft_wordcutter(char const *s, char c)
{
	char flag;
	char *word;

	flag = 0;
	while (*s)
	{
		if (*s != c)
		{
			if (!flag)
				word = (char *)s;
			flag = 1;
			*word = *s;
			word++;
		}
		if (*(s + 1) == '\0' || *(s + 1) == c)
		{
			*word = '\0';
			return (word);
		}
		s++;
	}
	return (NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		wordc;
	size_t	wordl;
	size_t	i;

	i = 0;
	wordc = ft_wordcounter(s, c);
	if (!(arr = (char **)malloc(sizeof(char *) * wordc + 1)))
		return (NULL);
	while (*s)
	{
		wordl = ft_strlen(ft_wordcutter(s, c));
		if (ft_wordcutter(s, c) && !(*(arr + i) = (char *)malloc(wordl)))
			*(arr + i) = ft_wordcutter(s, c);
		i++;
		while (*s == c)
			s++;
		s += wordl;
	}
	*(arr + i) = NULL;
	return (arr);
}
