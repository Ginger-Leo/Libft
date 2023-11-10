/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:35:06 by lstorey           #+#    #+#             */
/*   Updated: 2023/11/09 14:07:08 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (d == s)
		return (dst);
	if (s < d)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/*
int	main(void)
{
//char ols[] = "123456";
char srcm[] = "hello";
//char dstm[] = "1111";
char srca[] = "hello";
//char dsta[] = "1111";

//printf("Before mine  :\ndst   :%s\nsrc       :%s\n", dstm, srcm);
//printf("Before actual:\ndst    :%s\nsr        :%s\n", dsta, srca);
ft_memmove(srcm + 1, srcm,3);
memmove(srca + 1, srca, 3);
printf("After mine   :\ndst   :%s\nsrc      :%s\n", srcm + 1, srcm);
printf("After actual :\ndst  :%s\nsrc  :%s\n", srca + 1, srca);
printf("before:%s\n", ols);
//ft_memmove(ols+ 3, ols ,6);
printf("after :%s\n", ols);
return (0);
}*/