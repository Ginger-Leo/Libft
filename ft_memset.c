/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:21:21 by lstorey           #+#    #+#             */
/*   Updated: 2023/11/06 14:41:04 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *) b;
	while (len > 0)
	{
		str[len -1] = c;
		len--;
	}
	return (b);
}
/*
int main() 
{ 
    char str_af[12] = "hello world"; 
    char str_mf[12] = "hello world"; 
    
	//printf("Before memset: %s\n", str_af); 
	//printf("Before ft_memset: %s\n", str_mf); 
  
   memset(str_af, 'w', sizeof(char) *11); 
	
	ft_memset(str_mf, 'w', sizeof(char) *11);

    printf("After memset:  %s\n", str_af); 
    printf("After ft_memset:  %s\n", str_mf); 
    
	return 0; 
} 
*/