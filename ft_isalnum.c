/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:25:52 by lstorey           #+#    #+#             */
/*   Updated: 2023/11/06 10:45:01 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>
#include <unistd.h>
#include <stdio.h>*/
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
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
	
	c = 'k';
	mine = ft_isalnum(c);
	actual = isalnum(c);
	printf("my function = '%d', actual function = '%d'\n", mine, actual);

	c = 'G';
	mine = ft_isalnum(c);
	actual = isalnum(c);
	printf("my function = '%d', actual function = '%d'\n", mine, actual);

	c = '!';
	mine = ft_isalnum(c);
	actual = isalnum(c);
	printf("my function = '%d', actual function = '%d'\n", mine, actual);

	c = '5';
	mine = ft_isalnum(c);
	actual = isalnum(c);
	printf("my function = '%d', actual function = '%d'\n", mine, actual);



	return (0);
}
*/
