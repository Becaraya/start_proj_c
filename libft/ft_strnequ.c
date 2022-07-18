/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: becaraya <becaraya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 17:09:26 by becaraya          #+#    #+#             */
/*   Updated: 2022/06/23 13:54:10 by becaraya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t count;

	count = 0;
	while (count < n)
	{
		if (ft_memcmp(s1, s2, count) == 0 && ft_strcmp(s1,'\0') && ft_strcmp(s2,'\0'))
			count++;
		else
			return (0);
	}
	return (1);
}
