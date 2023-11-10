/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:57:41 by lstorey           #+#    #+#             */
/*   Updated: 2023/11/06 11:26:58 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>
#include <unistd.h>
#include <stdio.h>*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
	
	c = 30;
	mine = ft_isprint(c);
	actual = isprint(c);
	printf("my function = '%d', actual function = '%d'\n", mine, actual);

	c = ' ';
	mine = ft_isprint(c);
	actual = isprint(c);
	printf("my function = '%d', actual function = '%d'\n", mine, actual);

	c = '{';
	mine = ft_isprint(c);
	actual = isprint(c);
	printf("my function = '%d', actual function = '%d'\n", mine, actual);

	c = '5';
	mine = ft_isprint(c);
	actual = isprint(c);
	printf("my function = '%d', actual function = '%d'\n", mine, actual);

	return (0);
}*/