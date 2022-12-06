/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalyy <mchalyy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:40:38 by mchalyy           #+#    #+#             */
/*   Updated: 2022/12/06 14:41:10 by mchalyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int main(void)
{	
	char dest[] = "Hola Mundo";
	char src[] = "y Adios";
	unsigned int len;
	len = ft_strlcpy(dest, src, 5);
	printf("%d" , len);
	unsigned int a;
	a = strlcpy(dest, src, 5);
	printf("%d", a);
}