/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozturk <oozturk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:54:36 by oozturk           #+#    #+#             */
/*   Updated: 2022/02/10 13:55:29 by oozturk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					x;
	unsigned long		res;

	i = 0;
	x = 1;
	res = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			x = -x;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	if (res > 2147483647 && x != -1)
		return (-1);
	if (res > 2147483648 && x == -1)
		return (0);
	return ((int)(res * x));
}
//Str parametresini int değere çevirir.
/*
int	main()
{
	char test[] ="   -234\n";
	printf("%d",ft_atoi("  -234"));
	printf("%s",test);
}
*/
