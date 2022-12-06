/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalyy <mchalyy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:55:30 by mchalyy           #+#    #+#             */
/*   Updated: 2022/12/04 16:16:56 by mchalyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strchr(char *str, char a);

int main(void)
{
    char a[] = "1231H";
    char b = '3';
    printf("\nEste es el resultado de la funcion %s", strchr(a,b));
    printf("\nEste es el resultado de la funcion %s", ft_strchr(a,b));

}