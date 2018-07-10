/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkunz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 14:35:03 by lkunz             #+#    #+#             */
/*   Updated: 2018/07/09 19:10:40 by lkunz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_checker(const char *needle, const char *haystack, size_t len)
{
	int	i;
	int lenc;

	i = 0;
	lenc = (int)len;
	while (needle[i] && i < lenc)
	{
		if (needle[i] != haystack[i])
			return (NULL);
		i++;
	}
	return ((char *)haystack);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *check;

	check = NULL;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (*haystack)
	{
		if (*needle == *haystack)
			check = ft_checker(needle, haystack, len);
		if (check)
			return (check);
		haystack++;
	}
	return (NULL);
}
