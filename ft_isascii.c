/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:53:56 by lstorey           #+#    #+#             */
/*   Updated: 2023/10/24 15:54:10 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c > 0 && c < 127)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	char c;
	int mine;
	int actual;
	
	c = -1;
	mine = ft_isascii(c);
	actual = isascii(c);
	printf("my function = '%d', actual function = '%d'\n", mine, actual);

	c = 'G';
	mine = ft_isascii(c);
	actual = isascii(c);
	printf("my function = '%d', actual function = '%d'\n", mine, actual);

	c = '!';
	mine = ft_isascii(c);
	actual = isascii(c);
	printf("my function = '%d', actual function = '%d'\n", mine, actual);

	c = '5';
	mine = ft_isascii(c);
	actual = isascii(c);
	printf("my function = '%d', actual function = '%d'\n", mine, actual);



	return (0);
}*/
