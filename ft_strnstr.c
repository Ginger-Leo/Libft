/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:31:59 by lstorey           #+#    #+#             */
/*   Updated: 2023/11/10 14:31:35 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	i = 0;
	while ((us1[i] || us2[i]) && i < n)
	{
		if (us1[i] != us2[i])
			return (us1[i] - us2[i]);
		i++;
	}
	return (0);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*n;
	char	*h;

	i = 0;
	j = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (!n)
		return (h);
	while (i < len && h[i] && (ft_strlen(n) < len - i))
	{
		if ((ft_strncmp(h + i, n + j, ft_strlen(n))) == 0)
			return (h + i);
		else
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	pin;
	char	hay;

	hay[27] = "lorem ipsum dolor sit amet";
	pin[6] = "dolor";

	printf("mine:%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));

	printf("actual: %s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));

	return (0);

}*/