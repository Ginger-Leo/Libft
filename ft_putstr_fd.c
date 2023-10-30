/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:40:36 by lstorey           #+#    #+#             */
/*   Updated: 2023/10/30 15:51:48 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putstr_fd(char *s, int fd)
{
int i; 
i = 0;

while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}

}

int main()
{

char str[13] = "wagawn blud!";

ft_putstr_fd(str, 1);

return(0);

}

