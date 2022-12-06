/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalyy <mchalyy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:21:28 by mchalyy           #+#    #+#             */
/*   Updated: 2022/12/04 14:33:19 by mchalyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isdigit(char c);

int main(void)
{
    char a = '9';
    printf("\nThe result of the function is %d", isdigit(a));
    printf("\nThe result of MY function is %d", ft_isdigit(a));
}