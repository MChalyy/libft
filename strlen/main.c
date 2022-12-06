/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalyy <mchalyy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 17:10:20 by mchalyy           #+#    #+#             */
/*   Updated: 2022/12/04 17:14:23 by mchalyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlen(char *str);

int main(void)
{
    char a [] = "Hola Mundo";
    printf("\nThis is the result of the function %lu", strlen(a));
    printf("\nThis is the result of MY function %u", ft_strlen(a));
}