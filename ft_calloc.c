/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lstorey <lstorey@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:33:46 by lstorey           #+#    #+#             */
/*   Updated: 2023/11/10 16:11:34 by lstorey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
	{
	void	*ptr;
	int		i;

	ptr = malloc(count * size);
	i = 0;

	while (ptr)
	{
		i++;
		}
			return (ptr);
	}

int	main()
{

printf("%lu\n",ft_calloc(1, 4));

return (0);

}