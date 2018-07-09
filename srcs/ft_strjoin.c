/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkunz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 15:08:21 by lkunz             #+#    #+#             */
/*   Updated: 2018/07/06 18:56:16 by lkunz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	size_t	size2;
	char	*jstr;

	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(jstr = ft_strnew(size)))
		return (NULL);
	size = 0;
	size2 = 0;
	while (s1[size])
	{
		jstr[size] = s1[size];
		size++;
	}
	while (s2[size2])
	{
		jstr[size] = s2[size2];
		size++;
		size2++;
	}
	jstr[size] = '\0';
	return (jstr);
}
