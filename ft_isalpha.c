/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:20:14 by lstorey           #+#    #+#             */
/*   Updated: 2023/10/24 12:11:06 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <unistd.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
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
	mine = ft_isalpha(c);
	actual = isalpha(c);

	printf("my function = '%d'\n, actual function = '%d'\n", mine, actual);

	c = 'G';
	mine = ft_isalpha(c);
	actual = isalpha(c);
	printf("my function = '%d'\n, actual function = '%d'\n", mine, actual);

	c = '!';
	mine = ft_isalpha(c);
	actual = isalpha(c);

	printf("my function = '%d'\n, actual function = '%d'\n", mine, actual);

	c = '5';
	mine = ft_isalpha(c);
	actual = isalpha(c);
	printf("my function = '%d'\n, actual function = '%d'\n", mine, actual);

	return (0);
}*/
