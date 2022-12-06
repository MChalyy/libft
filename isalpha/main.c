/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalyy <mchalyy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 20:26:12 by mchalyy           #+#    #+#             */
/*   Updated: 2022/12/04 14:54:44 by mchalyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isalpha(char c);

int main(void)
{
	char str []  = "1q123qwr"; 
	//ft_isalpha(str);
	printf("\nThe result is passed: %d", isalpha(str[1]));
	printf("\nThe result of my function is: %d", ft_isalpha(str[1]));
}