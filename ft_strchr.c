/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 10:37:27 by lstorey           #+#    #+#             */
/*   Updated: 2023/11/09 10:35:58 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	ch = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *)s + i);
		else
			i++;
	}
	if (ch == '\0')
		return ((char *)s + i);
	return (0);
}
/*
int main()
{
char str1[] = "hello warld!";
//printf("%s\n", str1);
printf("actual:%s", strchr(str1, 'o'));
printf("\n");

char str2[] = "hello warld!";
ft_strchr(str2, 'o');
printf("mine:%s", ft_strchr(str2, 'o'));
printf("\n");
}
*/