/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:45:53 by lstorey           #+#    #+#             */
/*   Updated: 2023/11/07 13:49:28 by lstorey          ###   ########.fr       */
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
/*
int main()
{
char src1[] = "source";
char dst1[] = "";
//char src2[] = "source";
//char dst2[] = "";

ft_memcpy(dst1, src1, 5);
//memcpy(dst2, src2, 5);

printf("%s\n", src1);
printf("%s\n", dst1);
//printf("%s\n", src2);
//printf("%s\n", dst2);
}
*/