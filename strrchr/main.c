/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalyy <mchalyy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:40:47 by mchalyy           #+#    #+#             */
/*   Updated: 2022/12/04 17:11:19 by mchalyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(char *str, char a);

int main(void)
{
    char a [] = "Hola Mundo!";
    char a2[] = "Hola Mundo!";
    char b = 'o';
    printf("\nThis is the result of the function %s", strrchr(a,b));
    printf("\nThis is the result of MY function %s", ft_strrchr(a2,b));
}