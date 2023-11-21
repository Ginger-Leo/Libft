/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 14:36:59 by lstorey           #+#    #+#             */
/*   Updated: 2023/11/21 14:46:31 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*nstr;

	start = 0;
	end = ft_strlen(s1) - 1 ;
	if (!s1 || !set)
		return (NULL);
	if (start > end)
		return (ft_strdup(s1 + end + 1));
	while (s1 && ft_strchr(set, s1[start]) && start <= end)
		start++;
	while (end > start && ft_strrchr(set, s1[end]))
		end--;
	nstr = malloc(end - start + 2 * sizeof(char));
	if (!nstr)
		return (NULL);
	ft_strlcpy(nstr, &s1[start], end - start +2);
	return (nstr);
}
