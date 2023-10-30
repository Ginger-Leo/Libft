/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:01:33 by lstorey           #+#    #+#             */
/*   Updated: 2023/10/27 11:19:40 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
size_t di;
size_t si;
size_t srcl;
size_t dstl;

srcl = 0;
dstl = 0;


while (src[srcl] != '\0')
	srcl++;

while (dst[dstl] != '\0')
	dstl++;

if (dstsize > dstl)
	return (error);

if (dstsize == 0)
	return (srcl);
else
{
	di = dstl;
	si = 0;
 	while ((di < dstsize - 1) && (src[si] != '\0'))
	{
		dst[di] = src[si];
		di++;
		si++;
	}
	dst[di]  = '\0';
	return(dstl + srcl);
}
}
int main(void)
{
char d1[5] = "1234";
char s1[] = "1234567890";
//char d2[5] = "1234";
//char s2[] = "1234567890";
size_t testo;
//size_t testa;

//printf("%s\n", d1);
//printf("%s\n", s1);

testo = ft_strlcat(d1, s1, 10);
//testa = strlcat(d2, s2, 10);

//printf("%lu\n", strlcat(d1,s1,));

printf("%lu\n", testo);
//printf("%lu\n", testa);
printf("%s\n", d1);
//printf("%s\n", d2);
	  
return (0);

}
