/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalyy <mchalyy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:17:09 by mchalyy           #+#    #+#             */
/*   Updated: 2022/12/04 17:24:08 by mchalyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    char a [] = "Hola Mundo";
    char b [] = "Hola ";
    printf("\nThis is the result of the function %d", strncmp(a,b,10));
    printf("\nThis is the result of the function %d", strncmp(a,b,10));
}