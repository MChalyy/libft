/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalyy <mchalyy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:40:24 by mchalyy           #+#    #+#             */
/*   Updated: 2022/12/06 14:41:01 by mchalyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	s;

	s = 0;
	while (str[s] != '\0')
	{
		s++;
	}
	return (s);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	len;

	s = 0;
	len = ft_strlen(src);
	if (size == 0 || len == 0)
		dest[0] = '\0';
	else
	{	
		while (s < size - 1)
		{
			dest[s] = src[s];
			s++;
		}
		dest[size - 1] = '\0';
	}
	return (len);
}