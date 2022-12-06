/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalyy <mchalyy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:03:54 by mchalyy           #+#    #+#             */
/*   Updated: 2022/12/06 13:29:08 by mchalyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_memset(char *str, char a, size_t n);

int main (void)
{
    char str[50] = "Hola Mundo!";
    char str2[50] = "Hola Mundo!";
    printf("\nBefore memset(): %s\n", str);
    memset (str, '.', 8*sizeof(char));
    printf("\nAfter memset(): %s\n", str);
    printf("\nBefore MY memset(): %s\n", str2);
    ft_memset(str2, '.', 8*sizeof(char));
    printf("\nAfter MY memset(): %s\n", str2);

} 