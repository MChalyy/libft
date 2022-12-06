/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalyy <mchalyy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:28:29 by mchalyy           #+#    #+#             */
/*   Updated: 2022/12/04 16:38:34 by mchalyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isprint(char c);

int main(void)
{
    char a = 96;
    printf("\nThe result of this function is %d", isprint(a));
    printf("\nThe result of MY function is %d", ft_isprint(a));
}