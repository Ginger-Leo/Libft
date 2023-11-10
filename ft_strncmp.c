/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:41:21 by lstorey           #+#    #+#             */
/*   Updated: 2023/11/09 11:52:27 by lstorey          ###   ########.fr       */
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
/*
int main (void)
{
char s1[] = "";
char s2[] = "hey hhere";

printf("My function:%d\n", ft_strncmp(s1, s2, 10));
printf("Actual:     %d\n", strncmp(s1, s2, 10));
printf("Mine:       %d\n", ft_strncmp(s1, s2, 0));
printf("Actual:     %d\n", strncmp(s1, s2, 0));
printf("Mine:       %d\n", ft_strncmp(s1, s2, 2));
printf("Actual:     %d\n", strncmp(s1, s2, 2));
}	*/	