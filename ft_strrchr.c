/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:06:35 by lstorey           #+#    #+#             */
/*   Updated: 2023/11/09 09:52:01 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len] != 0)
		len++;
	if (c == '\0')
		return ((char *)s + len);
	while (len >= 0)
	{
		if (s[len] == c)
			return ((char *)(s + len));
		len--;
	}
	return (0);
}
/*
int main()
{
char str1[] = "hello warld!";
strrchr(str1, 'o');
printf("%s\n", str1);
//strrchr(str1, 'o');
printf("\n");

char str2[] = "hello warld!";
ft_strrchr(str2, 'o');
printf("%s\n", str2);
//ft_strrchr(str2, 'o');
printf("\n");

}
*/