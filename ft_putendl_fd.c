/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:03:23 by lstorey           #+#    #+#             */
/*   Updated: 2023/10/30 16:16:36 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putendl_fd(char*s, int fd)
{
int i;
i = 0;

while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}

if (s[i] == '\0')
	write(fd, "\n", 1);

}

int main()
{
char str[24] = "well hello there world!";

ft_putendl_fd(str, 1);  

}
