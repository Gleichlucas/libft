/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkunz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 14:35:03 by lkunz             #+#    #+#             */
/*   Updated: 2018/07/07 14:52:03 by lkunz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_checker(const char *needle, const char *haystack)
{
	char *check;

	check = haystack;
	while (*needle)
	{
		if (*needle != *haystack)
			return (NULL);
		needle++;
		haystack++;
	}
	return (check);
}

char			*ft_strstr(const char *haystack, const char *needle)
{
	char *check;

	check = NULL;
	if (ft_strlen(needle) == 0)
		return (haystack);
	while (*haystack)
	{
		if (*needle == *haystack)
			check = ft_checker(needle, haystack);
		if (check)
			return (check);
		haystack++;
	}
	return (NULL);
}
