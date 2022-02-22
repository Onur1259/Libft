/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozturk <oozturk@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:30:43 by oozturk           #+#    #+#             */
/*   Updated: 2022/02/17 17:30:45 by oozturk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s || !fd)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int	main()
{
int	i = open("my.txt",O_WRONLY);
int	c = open("taha.txt",O_WRONLY);
printf("%d\n",i);
printf("%d\n",c);
ft_putstr_fd("yasin",i);
ft_putstr_fd("taha",c);
}
*/
