/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkunz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 15:08:21 by lkunz             #+#    #+#             */
/*   Updated: 2018/07/10 20:41:53 by lkunz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t size_helper(char const *s1, char const *s2)
{
	if (!s1)
		return (ft_strlen(s2));
	if (!s2)
		return (ft_strlen(s1));
	else
		return (ft_strlen(s1) + ft_strlen(s2));
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	size2;
	char	*jstr;

	if (!s1 && !s2)
		return (NULL);
	size = size_helper(s1, s2);
	if (!(jstr = ft_strnew(size)))
		return (NULL);
	size = 0;
	size2 = 0;
	if (s1)
	{
	while (s1[size])
	{
		jstr[size] = s1[size];
		size++;
	}
	}
	if (s2)
	{
	while (s2[size2])
	{
		jstr[size] = s2[size2];
		size++;
		size2++;
	}
	}
	return (jstr);
}
