/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalyy <mchalyy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:55:05 by mchalyy           #+#    #+#             */
/*   Updated: 2022/12/04 14:17:59 by mchalyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

char ft_toupper(char c);

int main(void)
{
    char a = 'z';
    char b = 'z';
    
    printf ("\nThis is the result of the fuction: %c", toupper(a));
    printf ("\nThis is the result of MY fuction: %c", ft_toupper(b));
}