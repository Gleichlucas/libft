/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkunz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 13:15:09 by lkunz             #+#    #+#             */
/*   Updated: 2018/07/09 15:15:37 by lkunz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_size;
	size_t	dest_size;
	size_t	i;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dst);
	i = 0;
	if (dest_size > size)
		return (size + src_size);
	while (src[i] && dest_size + i + 1 < size)
	{
		dst[dest_size + i] = src[i];
		i++;
	}
	dst[dest_size + i] = '\0';
	return (dest_size + src_size);
}
