/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macis <macis@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 00:23:51 by macis             #+#    #+#             */
/*   Updated: 2022/07/02 11:05:03 by macis            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (32 <= c && c < 127)
		return (1);
	return (0);
}
/*
int main(void)
{
   char c;

   c = '\n';
    printf("%d", ft_isprint(c));
}
*/