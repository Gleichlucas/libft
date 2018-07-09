/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkunz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 14:11:14 by lkunz             #+#    #+#             */
/*   Updated: 2018/07/07 14:26:54 by lkunz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *res;

	if (c == 0)
		return (s + ft_strlen(s) + 1);
	else
	{
		while (*s)
		{
			if (*s == (char)c)
				res = s;
			s++;
		}
		return (res);
	}
	return (NULL);
}
