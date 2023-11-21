/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:45:53 by lstorey           #+#    #+#             */
/*   Updated: 2023/11/21 14:33:02 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	size_t		i;

	s = (const char *)src;
	d = (char *)dst;
	i = 0;
	while (i < n)
	{
		if (d == '\0' || s == '\0')
			return (0);
		d[i] = s[i];
		i++;
	}
	return (dst);
}
