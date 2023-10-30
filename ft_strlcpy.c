/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:02:06 by lstorey           #+#    #+#             */
/*   Updated: 2023/10/26 14:58:32 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <unistd.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	i = 0;
	size_t len;
	len = 0;

	while (src[len] != '\0')
		len++;
     if (dstsize == 0)
	 	return (len);
	 else
	 {
		while ((i < dstsize - 1) && (src[i] != '\0'))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	return (len);
	}
}

int main(void)
{
	char d1[] = "hello world";
	char s1[] = "get off me joe";
//	size_t test;

	printf("%s\n", d1);
//	test = ft_strlcpy(d1, s1, 0);
//	printf("%zu\n", test);
	printf("actual: %zu\n", strlcpy(d1, s1, 0));
//	printf("ours: %lu\n", test);
	printf("%s\n", d1);
}
