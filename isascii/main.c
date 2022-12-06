/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalyy <mchalyy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:19:45 by mchalyy           #+#    #+#             */
/*   Updated: 2022/12/04 16:37:10 by mchalyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isascii(char c);

int main(void)
{
    char a = 3;
    printf("\nThis is the result of the function %d", isascii(a));
    printf("\nThis is the result of MY function %d", ft_isascii(a));
}