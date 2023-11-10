/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:57:24 by lstorey           #+#    #+#             */
/*   Updated: 2023/11/06 10:48:31 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <ctype.h>
#include <unistd.h>
#include <stdio.h>*/
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
/*
int	main(void)
{
	char	c;
	int		mine;
	int		actual;

	c = 'k';
	mine = ft_isdigit(c);
	actual = isdigit(c);
	printf("my function = '%d', actual function = '%d'", mine, actual);
	return (0);
}
*/