/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:41:21 by lstorey           #+#    #+#             */
/*   Updated: 2023/10/26 10:32:23 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
//#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	i = 0;

	while (s1[i] == s2[i])
	{		i++;
		if (i == n)
		return (s1[i] - s2[i]);

	if ((s1[i] == '\0') || (s2[i] == '\0'))
		return (s1[i] - s2[i]);

	}
		return (s1[i]-s2[i]);
	
	if (s1[i] != s2[i])
		 return (s1[i]-s2[i]);

}
int main (void)
{
char s1[] = "bonjour";
char s2[] = "bonwdy";

//printf("My function:%d\n", ft_strncmp(s1, s2, 5));
//printf("Actual:%d\n", strncmp(s1, s2, 5));
//printf("Mine:%d\n", ft_strncmp(s1, s2));
//printf("Actual:%d\n", strncmp(s1, s2));
//printf("Mine:%d\n", ft_strncmp(s1, s2));
//printf("Actual:%d\n", strncmp(s1, s2));

		}		
