/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkunz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 14:35:03 by lkunz             #+#    #+#             */
/*   Updated: 2018/07/07 14:57:04 by lkunz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_checker(const char *needle, const char *haystack, size_t len)
{
	char	*check;
	size_t	i;

	i = 0;
	check = haystack;
	while (*needle && i < len)
	{
		if (*needle != *haystack)
			return (NULL);
		needle++;
		haystack++;
		i++;
	}
	return (check);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char *check;

	check = NULL;
	if (ft_strlen(needle) == 0)
		return (haystack);
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
