/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalyy <mchalyy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:36:15 by mchalyy           #+#    #+#             */
/*   Updated: 2022/12/06 14:37:34 by mchalyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int unsigned	adest;
	int unsigned	bsrc;
	int unsigned	c;
	int unsigned	dcopy;

	adest = ft_strlen(dest);
	bsrc = ft_strlen(src);
	c = 0;
	if (size <= adest)
		return (bsrc + size);
	dcopy = adest;
	while (c < (size - adest - 1))
	{
		dest[dcopy] = src[c];
		dcopy++;
		c++;
	}
	dest[dcopy] = '\0';
	return (adest + bsrc);
}