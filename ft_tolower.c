/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:05:21 by lstorey           #+#    #+#             */
/*   Updated: 2023/11/06 10:38:15 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>
#include "libft.h"

int	ft_tolower(char c)
{
	if (c > 64 && c < 91)
		c = c + 32;
	return (c);
}

/*int main(void)
{
char c;
c = 'a';

printf("My function: %c\n", ft_tolower(c));
printf("Actual function: %c\n", tolower(c));

c = 'A';

printf("My function: %c\n", ft_tolower(c));
printf("Actual function: %c\n", tolower(c));

return(0);

}*/
