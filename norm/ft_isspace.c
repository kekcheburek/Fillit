/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/04 15:32:02 by ekiriche          #+#    #+#             */
/*   Updated: 2017/11/04 15:34:16 by ekiriche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int n)
{
	if (n == ' ' || n == '\t' || n == '\n'
			|| n == '\v' || n == '\f' || n == '\r')
		return (1);
	return (0);
}