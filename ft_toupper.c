/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:55:32 by lstorey           #+#    #+#             */
/*   Updated: 2023/10/25 12:31:35 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_toupper(char c)
{
	if (c > 64 && c < 91)
		return (c);
	if (c > 96 && c < 123)
		c = c - 32;
	return (c);
}
/*
int main(void)
{
char c;
c = 'a';

printf("My function: %c\n", ft_toupper(c));
printf("Actual function: %c\n", toupper(c));

c = 'A';

printf("My function: %c\n", ft_toupper(c));
printf("Actual function: %c\n", toupper(c));


return(0);

}*/
