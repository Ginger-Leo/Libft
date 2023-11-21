/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:20:30 by lstorey           #+#    #+#             */
/*   Updated: 2023/11/21 14:36:16 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	str_len(char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}

static size_t	str_cntr(char *str, char delim)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == delim)
			++str;
		if (*str == '\0')
			return (count);
		++count;
		while (*str && *str != delim)
			++str;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	*str;
	char	**array;
	size_t	arr_pnt;
	size_t	count;

	arr_pnt = 0;
	str = (char *)s;
	count = str_cntr(str, c);
	array = malloc((count + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	while (arr_pnt < count)
	{
		while (*str == c)
			str++;
		array[arr_pnt] = ft_substr(str, 0, str_len (str, c));
		str += str_len(str, c);
		++arr_pnt;
	}
	array[arr_pnt] = NULL;
	return (array);
}
