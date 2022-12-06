/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalyy <mchalyy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:49:40 by mchalyy           #+#    #+#             */
/*   Updated: 2022/12/04 14:52:31 by mchalyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isalnum(char c);

int main(void)
{
    char a = '=';

    printf ("\nThis is the result of the fuction: %d", isalnum(a));
    printf ("\nThis is the result of MY fuction: %d", ft_isalnum(a));
}