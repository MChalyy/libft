/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalyy <mchalyy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:36:43 by mchalyy           #+#    #+#             */
/*   Updated: 2022/12/04 14:42:42 by mchalyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

char ft_tolower(char c);

int main(void)
{
    char a = 'A';
    char b = 'A';
    
    printf ("\nThis is the result of the fuction: %c", tolower(a));
    printf ("\nThis is the result of MY fuction: %c", ft_tolower(b));
}