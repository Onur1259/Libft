/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozturk <oozturk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:34:41 by oozturk           #+#    #+#             */
/*   Updated: 2022/02/15 11:34:43 by oozturk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void	onurtoupper(unsigned int i, char* d)
{
	int	a;

	a = 0;
	i = 0;
	if (*d)
	{
		d[a] = d[a] - 32;
	}
}

int	main()
{
	char test[] = "onur";
	ft_striteri(test,onurtoupper);
	printf("%s",test);
}
*/
