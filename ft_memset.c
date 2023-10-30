/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:21:21 by lstorey           #+#    #+#             */
/*   Updated: 2023/10/30 15:04:41 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>
#include <unistd.h>

void *ft_memset(void *b, int c, size_t len)
{
unsigned char *str;
size_t	i;

i = 0;
str = (unsigned char*)b;

//	while (str[i] != '\0')
//		i++;



	while (i <= len)
	{   	
		str[i] = c;	
		i++;
	//if(c == '\0' || i =='\0')
		
	
	}

return (b);
}

int main() 
{ 
    char str_af[] = "hello world"; 
    char str_mf[] = "hello world"; 
    
	//printf("Before memset: %s\n", str_af); 
	//printf("Before ft_memset: %s\n", str_mf); 
  
    memset(str_af, 'w', sizeof(char) *11); 
	
	ft_memset(str_mf, 'w', sizeof(char) *11);

    printf("After memset:  %s\n", str_af); 
    printf("After ft_memset:  %s\n", str_mf); 
    
	return 0; 
} 
