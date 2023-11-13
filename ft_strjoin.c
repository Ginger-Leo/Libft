/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 10:25:27 by lstorey           #+#    #+#             */
/*   Updated: 2023/11/13 11:22:03 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	size_t	len;
	char	*nstr;

	len = ft_strlen(s1) + ft_strlen(s2);
	nstr = (char *)malloc (len * sizeof(char) + 1);
	if (!nstr)
		return (0);
	i = 0;
	j = 0;
	while (s1[j])
		nstr[i++] = s1[j++];
	j = 0;
	while (s2[j])
		nstr[i++] = s2[j++];
	nstr[i] = '\0';
	return (nstr);
}
/*
int main ()
{
    printf("%s\n", ft_strjoin("hello ", "leo"));
    
    return(0);
}
*/