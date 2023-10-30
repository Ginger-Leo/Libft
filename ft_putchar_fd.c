/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:06:52 by lstorey           #+#    #+#             */
/*   Updated: 2023/10/30 13:56:09 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar_fd(char c, int fd)
{

write(fd, &c, 1);

}
/*
int main()
{

	ft_putchar_fd('g', 1);

		return(0);


}
*/
