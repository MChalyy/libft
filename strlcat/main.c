/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalyy <mchalyy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:37:52 by mchalyy           #+#    #+#             */
/*   Updated: 2022/12/06 14:37:54 by mchalyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char dest[50] = "paco";
	char src[50] = "tabaco";
	char desttest[50] = "paco";
	char srctest[50] = "tabaco"; 
	printf("%lu", strlcat(desttest, srctest, 9));
	printf("%c" , '\n');
	printf("%u", ft_strlcat(dest, src, 9));
	printf("%c" , '\n');
	printf("%s", desttest);
	printf("%c" , '\n');
	printf("%s", dest);	
}