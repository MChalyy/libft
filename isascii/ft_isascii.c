/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchalyy <mchalyy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:19:17 by mchalyy           #+#    #+#             */
/*   Updated: 2022/12/04 16:26:29 by mchalyy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(char c)
{
	int	a;

	a = 0;
	if (c >= 0 && c <= 127)
		a = 1;
	return (a);
}
