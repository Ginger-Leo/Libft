/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:10:53 by lstorey           #+#    #+#             */
/*   Updated: 2023/11/21 14:19:57 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	p;
	size_t			i;

	str = (unsigned char *)s;
	p = (unsigned char)c;
	i = 0;
	if (p == '\0')
		return (NULL);
	while (str[i] && i < n)
	{
		if (str[i] == p)
			return (str + i);
		else
			i++;
	}
	if (p == '\0')
		return (str + i);
	return (NULL);
}
